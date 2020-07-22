/*
 * Copyright (c) 2020 Ahsan Barkati
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * $FreeBSD$
 */

#include "libroute.h"

struct rt_msg_t {
	struct	rt_msghdr m_rtm;
	char	m_space[512];
};

struct rt_handle_t {
	int fib;
	int s;
	struct sockaddr_storage so[RTAX_MAX];
	int rtm_addrs;
};

rt_handle *
libroute_open(int fib)
{
	rt_handle *h;
	h = calloc(1, sizeof(*h));

	if (h == NULL)
		return (NULL);

	h->fib = fib;
	h->s = socket(PF_ROUTE, SOCK_RAW, 0);
	setsockopt(h->s, SOL_SOCKET, SO_SETFIB, (void *)&(h->fib),sizeof(h->fib));

	return (h);
}

struct sockaddr*
str_to_sockaddr(char * str)
{
	struct sockaddr* sa;
	struct sockaddr_in *sin;
	sa = calloc(1, sizeof(*sa));

	sa->sa_family = AF_INET;
	sa->sa_len = sizeof(struct sockaddr_in);
	sin = (struct sockaddr_in *)(void *)sa;
	inet_aton(str, &sin->sin_addr);
	return sa;
}

int
prefixlen(rt_handle *h, char *str)
{
	int len = atoi(str), q, r;
	int max;
	char *p;

	h->rtm_addrs |= RTA_NETMASK;

	struct sockaddr_in6 *sin6 = (struct sockaddr_in6 *)&(h->so)[RTAX_NETMASK];

	max = 128;
	p = (char *)&sin6->sin6_addr;
	sin6->sin6_family = AF_INET6;
	sin6->sin6_len = sizeof(*sin6);
	

	q = len >> 3;
	r = len & 7;
	memset((void *)p, 0, max / 8);
	if (q > 0)
		memset((void *)p, 0xff, q);
	if (r > 0)
		*((u_char *)p + q) = (0xff00 >> r) & 0xff;
	if (len == max)
		return (-1);
	else
		return (len);
}

int
inet6_makenetandmask(rt_handle *h, struct sockaddr_in6 *sin6, char *plen)
{

	if (plen == NULL) {
		if (IN6_IS_ADDR_UNSPECIFIED(&sin6->sin6_addr) &&
		    sin6->sin6_scope_id == 0){}
	}

	if (plen == NULL || strcmp(plen, "128") == 0)
		return (1);
	h->rtm_addrs |= RTA_NETMASK;
	prefixlen(h, plen);
	return (0);
}

int
getaddr(rt_handle *h, int idx, char *str)
{
	struct sockaddr *sa;
	char *q;

	int af = AF_INET6;
	int aflen = sizeof(struct sockaddr_in6);

	h->rtm_addrs |= (1 << idx);
	sa = (struct sockaddr *)&(h->so[idx]);
	sa->sa_family = af;
	sa->sa_len = aflen;

	struct addrinfo hints, *res;
	int ecode;

	q = NULL;
	if (idx == RTAX_DST && (q = strchr(str, '/')) != NULL)
		*q = '\0';

	memset(&hints, 0, sizeof(hints));
	hints.ai_family = sa->sa_family;
	hints.ai_socktype = SOCK_DGRAM;
	ecode = getaddrinfo(str, NULL, &hints, &res);

	memcpy(sa, res->ai_addr, res->ai_addrlen);
	freeaddrinfo(res);
	if (q != NULL)
		*q++ = '/';
	if (idx == RTAX_DST)
		return (inet6_makenetandmask(h, (struct sockaddr_in6 *)(void *)sa, q));
	return (0);
}

int
libroute_modify6(rt_handle *h, struct rt_msg_t *rtmsg, int operation)
{
	int flags, error, rlen, l;

	// we need to handle flags according to the operation
	flags = RTF_STATIC;
	flags |= RTF_UP;
	flags |= RTF_HOST;
	flags |= RTF_GATEWAY;
	

	if(operation == RTM_GET){
		if (h->so[RTAX_IFP].ss_family == 0) {
			h->so[RTAX_IFP].ss_family = AF_LINK;
			h->so[RTAX_IFP].ss_len = sizeof(struct sockaddr_dl);
			h->rtm_addrs |= RTA_IFP;
		}
	}

	error = fill_rtmsg(h, rtmsg, flags, operation);
	l = (rtmsg->m_rtm).rtm_msglen;

	if((rlen = write(h->s, (char *)rtmsg, l)) < 0){
		printf("failed to write\n");
		return 1;
	}

	if (operation == RTM_GET) {
		l = read(h->s, (char *)rtmsg, sizeof(rtmsg));
		printf("length read:%d\n",l);
	}
	return error;
}

int
libroute_add6(rt_handle *h){
	struct rt_msg_t rtmsg;
	memset(&rtmsg, 0, sizeof(struct rt_msg_t));
	int error = libroute_modify6(h, &rtmsg, RTM_ADD);
	return error;
}


int
libroute_fillso(rt_handle *h, int idx, struct sockaddr* sa_in)
{
	struct sockaddr *sa; 
	struct sockaddr_in *sin;

	h->rtm_addrs |= (1 << idx);
	
	sa = (struct sockaddr *)&(h->so[idx]);
	
	sa->sa_family = sa_in->sa_family;
	sa->sa_len = sa_in->sa_len;
	sin = (struct sockaddr_in *)(void *)sa;
	sin->sin_addr = ((struct sockaddr_in *)(void *)sa_in)->sin_addr;
	return 0;
}

int
libroute_modify(rt_handle *h, struct rt_msg_t *rtmsg, struct sockaddr* sa_dest, struct sockaddr* sa_gateway, int operation)
{
	int flags, error, rlen, l;
	libroute_fillso(h, RTAX_DST, sa_dest);

	

	if(sa_gateway != NULL){
		libroute_fillso(h, RTAX_GATEWAY, sa_gateway);
		
	}

	// we need to handle flags according to the operation
	flags = RTF_STATIC;
	flags |= RTF_UP;
	flags |= RTF_HOST;
	flags |= RTF_GATEWAY;
	

	if(operation == RTM_GET){
		if (h->so[RTAX_IFP].ss_family == 0) {
			h->so[RTAX_IFP].ss_family = AF_LINK;
			h->so[RTAX_IFP].ss_len = sizeof(struct sockaddr_dl);
			h->rtm_addrs |= RTA_IFP;
		}
	}

	error = fill_rtmsg(h, rtmsg, flags, operation);
	l = (rtmsg->m_rtm).rtm_msglen;

	if((rlen = write(h->s, (char *)rtmsg, l)) < 0){
		printf("failed to write\n");
		return 1;
	}

	if (operation == RTM_GET) {
		l = read(h->s, (char *)rtmsg, sizeof(rtmsg));
		printf("length read:%d\n",l);
	}
	return error;
}

int
libroute_add(rt_handle *h, struct sockaddr* dest, struct sockaddr* gateway){
	struct rt_msg_t rtmsg;
	memset(&rtmsg, 0, sizeof(struct rt_msg_t));
	int error = libroute_modify(h, &rtmsg, dest, gateway, RTM_ADD);
	return error;
}

int
libroute_change(rt_handle *h, struct sockaddr* dest, struct sockaddr* gateway){
	struct rt_msg_t rtmsg;
	memset(&rtmsg, 0, sizeof(struct rt_msg_t));
	int error = libroute_modify(h, &rtmsg, dest, gateway, RTM_CHANGE);
	return error;
}

int
libroute_del(rt_handle *h, struct sockaddr* dest){
	struct rt_msg_t rtmsg;
	memset(&rtmsg, 0, sizeof(struct rt_msg_t));
	int error = libroute_modify(h, &rtmsg, dest, NULL, RTM_DELETE);
	return error;
}

int
libroute_get(rt_handle *h, struct sockaddr* dest){
	struct rt_msg_t rtmsg;
	memset(&rtmsg, 0, sizeof(struct rt_msg_t));
	int error = libroute_modify(h, &rtmsg, dest, NULL, RTM_GET);
	return error;
}

int
fill_rtmsg(rt_handle *h, struct rt_msg_t *rtmsg_t, int flags, int operation)
{
	rt_msg* rtmsg = rtmsg_t;
	char *cp = rtmsg->m_space;
	int l, rtm_seq = 0;
	struct sockaddr_storage *so = h->so;
	static struct rt_metrics rt_metrics;
	static u_long  rtm_inits;

#define NEXTADDR(w, u)							\
	if ((h->rtm_addrs) & (w)) {						\
		l = SA_SIZE(&(u));					\
		memmove(cp, (char *)&(u), l);				\
		cp += l;						\
	}

#define rtm rtmsg->m_rtm
	rtm.rtm_type = operation;
	rtm.rtm_flags = flags;
	rtm.rtm_version = RTM_VERSION;
	rtm.rtm_seq = ++rtm_seq;
	rtm.rtm_addrs = h->rtm_addrs;
	rtm.rtm_rmx = rt_metrics;
	rtm.rtm_inits = rtm_inits;

	NEXTADDR(RTA_DST, so[RTAX_DST]);
	NEXTADDR(RTA_GATEWAY, so[RTAX_GATEWAY]);
	NEXTADDR(RTA_NETMASK, so[RTAX_NETMASK]);
	NEXTADDR(RTA_GENMASK, so[RTAX_GENMASK]);
	NEXTADDR(RTA_IFP, so[RTAX_IFP]);
	NEXTADDR(RTA_IFA, so[RTAX_IFA]);
	rtm.rtm_msglen = l = cp - (char *)rtmsg;


#undef rtm
	return (0);
}