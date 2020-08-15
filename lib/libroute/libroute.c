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

void
libroute_setfib(rt_handle *h, int fib)
{
	h->fib = fib;
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

struct sockaddr*
str_to_sockaddr6(char *str)
{
	struct sockaddr* sa;
	struct addrinfo hints, *res;
	int ecode;

	sa = calloc(1, sizeof(*sa));
	sa->sa_family = AF_INET6;
	sa->sa_len = sizeof(struct sockaddr_in6);

	memset(&hints, 0, sizeof(hints));
	hints.ai_family = sa->sa_family;
	hints.ai_socktype = SOCK_DGRAM;
	ecode = getaddrinfo(str, NULL, &hints, &res);

	memcpy(sa, res->ai_addr, res->ai_addrlen);
	freeaddrinfo(res);

	return sa;
}

void
libroute_fillso(rt_handle *h, int idx, struct sockaddr* sa_in)
{
	struct sockaddr *sa;
	h->rtm_addrs |= (1 << idx);
	sa = (struct sockaddr *)&(h->so[idx]);
	memcpy(sa, sa_in, sa_in->sa_len);
	return;
}

int
libroute_modify(rt_handle *h, struct rt_msg_t *rtmsg, struct sockaddr* sa_dest, struct sockaddr* sa_gateway, int operation, int flags)
{
	int rlen, l;
	libroute_fillso(h, RTAX_DST, sa_dest);

	if(sa_gateway != NULL){
		libroute_fillso(h, RTAX_GATEWAY, sa_gateway);
	}

	if(operation == RTM_GET){
		if (h->so[RTAX_IFP].ss_family == 0) {
			h->so[RTAX_IFP].ss_family = AF_LINK;
			h->so[RTAX_IFP].ss_len = sizeof(struct sockaddr_dl);
			h->rtm_addrs |= RTA_IFP;
		}
	}

	fill_rtmsg(h, rtmsg, operation, flags);
	l = (rtmsg->m_rtm).rtm_msglen;

	if((rlen = write(h->s, (char *)rtmsg, l)) < 0){
		return 1;
	}

	if (operation == RTM_GET) {
		l = read(h->s, (char *)rtmsg, sizeof(*rtmsg));
	}
	return 0;
}

int
libroute_add(rt_handle *h, struct sockaddr* dest, struct sockaddr* gateway){
	struct rt_msg_t rtmsg;
	memset(&rtmsg, 0, sizeof(struct rt_msg_t));
	int flags;

	// we need to handle flags according to the operation
	flags = RTF_STATIC;
	flags |= RTF_UP;
	flags |= RTF_HOST;
	flags |= RTF_GATEWAY;

	int error = libroute_modify(h, &rtmsg, dest, gateway, RTM_ADD, flags);
	return error;
}

int
libroute_change(rt_handle *h, struct sockaddr* dest, struct sockaddr* gateway){
	struct rt_msg_t rtmsg;
	memset(&rtmsg, 0, sizeof(struct rt_msg_t));
	int flags;

	// we need to handle flags according to the operation
	flags = RTF_STATIC;
	flags |= RTF_UP;
	flags |= RTF_HOST;
	flags |= RTF_GATEWAY;

	int error = libroute_modify(h, &rtmsg, dest, gateway, RTM_CHANGE, flags);
	return error;
}

int
libroute_del(rt_handle *h, struct sockaddr* dest){
	struct rt_msg_t rtmsg;
	memset(&rtmsg, 0, sizeof(struct rt_msg_t));
	int flags;

	// we need to handle flags according to the operation
	flags = RTF_STATIC;
	flags |= RTF_UP;
	flags |= RTF_HOST;
	flags |= RTF_GATEWAY;
	flags |= RTF_PINNED;
	int error = libroute_modify(h, &rtmsg, dest, NULL, RTM_DELETE, flags);
	return error;
}

int
libroute_get(rt_handle *h, struct sockaddr* dest){
	struct rt_msg_t rtmsg;
	memset(&rtmsg, 0, sizeof(struct rt_msg_t));
	int flags;

	// we need to handle flags according to the operation
	flags = RTF_STATIC;
	flags |= RTF_UP;
	flags |= RTF_HOST;
	int error = libroute_modify(h, &rtmsg, dest, NULL, RTM_GET, flags);
	return error;
}

void
fill_rtmsg(rt_handle *h, struct rt_msg_t *rtmsg_t, int operation, int flags)
{
	rt_msg_t* rtmsg = rtmsg_t;
	char *cp = rtmsg->m_space;
	int l, rtm_seq = 0;
	struct sockaddr_storage *so = h->so;
	static struct rt_metrics rt_metrics;
	static u_long  rtm_inits;

	memset(rtmsg, 0, sizeof(struct rt_msg_t));

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
	return;
}