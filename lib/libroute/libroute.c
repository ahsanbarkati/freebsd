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

#include <errno.h>
#include "libroute.h"

static void fill_rtmsg(rt_handle*, struct rt_msg_t*, int, int);
static void fillso(rt_handle *, int, struct sockaddr*);

struct rt_handle_t {
	int fib;
	int s;
	struct sockaddr_storage so[RTAX_MAX];
	int rtm_addrs;
	int errcode;
};

rt_handle *
libroute_open(int fib)
{
	rt_handle *h;
	h = calloc(1, sizeof(*h));
	if (h == NULL) {
		h->errcode = errno;
		return NULL;
	}
	h->s = socket(PF_ROUTE, SOCK_RAW, 0);
	if (h->s == -1){
		h->errcode = errno;
	}
	if (libroute_setfib(h, fib)) {
		h->errcode = errno;
	}
	if (h->errcode) {
		free(h);
		return (NULL);	
	}
	return (h);
}

void libroute_close(rt_handle *h)
{
	free(h);
}


int
libroute_errno(rt_handle *h)
{
	return (h->errcode);
}


int
libroute_setfib(rt_handle *h, int fib)
{
	h->fib = fib;
	if (setsockopt(h->s, SOL_SOCKET, SO_SETFIB, (void *)&(h->fib),
		sizeof(h->fib)) == -1) {
		h->errcode = errno;
		return (-1);
	}
	return (0);
}

struct sockaddr*
str_to_sockaddr(rt_handle *h, char *str)
{
	struct sockaddr* sa;
	struct sockaddr_in *sin;
	sa = calloc(1, sizeof(*sa));
	if (sa == NULL) {
		h->errcode = errno;
		return (NULL);
	}

	sa->sa_family = AF_INET;
	sa->sa_len = sizeof(struct sockaddr_in);
	sin = (struct sockaddr_in *)(void *)sa;
	if (inet_aton(str, &sin->sin_addr) == 0) {
		free(sa);
		return (NULL);
	}
	return (sa);
}

struct sockaddr*
str_to_sockaddr6(rt_handle *h, char *str)
{
	struct sockaddr* sa;
	struct addrinfo hints, *res;

	sa = calloc(1, sizeof(*sa));
	if (sa == NULL) {
		h->errcode = errno;
		return (NULL);
	}
	sa->sa_family = AF_INET6;
	sa->sa_len = sizeof(struct sockaddr_in6);
	memset(&hints, 0, sizeof(hints));
	hints.ai_family = sa->sa_family;
	hints.ai_socktype = SOCK_DGRAM;
	if (getaddrinfo(str, NULL, &hints, &res)) {
		free(sa);
		return (NULL);
	}
	memcpy(sa, res->ai_addr, res->ai_addrlen);
	freeaddrinfo(res);
	return (sa);
}

static void
fillso(rt_handle *h, int idx, struct sockaddr* sa_in)
{
	struct sockaddr *sa;
	h->rtm_addrs |= (1 << idx);
	sa = (struct sockaddr *)&(h->so[idx]);
	memcpy(sa, sa_in, sa_in->sa_len);
	return;
}

int
libroute_modify(rt_handle *h, struct rt_msg_t *rtmsg, struct sockaddr* sa_dest,
	struct sockaddr* sa_gateway, int operation, int flags)
{
	int result, len;
	fillso(h, RTAX_DST, sa_dest);

	if (sa_gateway != NULL) {
		fillso(h, RTAX_GATEWAY, sa_gateway);
	}

	if (operation == RTM_GET) {
		if (h->so[RTAX_IFP].ss_family == 0) {
			h->so[RTAX_IFP].ss_family = AF_LINK;
			h->so[RTAX_IFP].ss_len = sizeof(struct sockaddr_dl);
			h->rtm_addrs |= RTA_IFP;
		}
	}

	fill_rtmsg(h, rtmsg, operation, flags);
	len = (rtmsg->m_rtm).rtm_msglen;

	if ((result = write(h->s, (char *)rtmsg, len)) < 0) {
		h->errcode = errno;
		return (-1);
	}

	if (operation == RTM_GET) {
		if (( result = read(h->s, (char *)rtmsg, sizeof(*rtmsg))) < 0 ) {
			h->errcode = errno;
			return (-1);
		}
	}
	
	return (0);
}

int
libroute_add(rt_handle *h, struct sockaddr* dest, struct sockaddr* gateway){
	struct rt_msg_t rtmsg;
	int flags;
	
	memset(&rtmsg, 0, sizeof(struct rt_msg_t));
	flags = RTF_STATIC;
	flags |= RTF_UP;
	flags |= RTF_HOST;
	flags |= RTF_GATEWAY;

	return (libroute_modify(h, &rtmsg, dest, gateway, RTM_ADD, flags));
}

int
libroute_change(rt_handle *h, struct sockaddr* dest, struct sockaddr* gateway){
	struct rt_msg_t rtmsg;
	int flags;
	
	memset(&rtmsg, 0, sizeof(struct rt_msg_t));
	flags = RTF_STATIC;
	flags |= RTF_UP;
	flags |= RTF_HOST;
	flags |= RTF_GATEWAY;

	return (libroute_modify(h, &rtmsg, dest, gateway, RTM_CHANGE, flags));
}

int
libroute_del(rt_handle *h, struct sockaddr* dest){
	struct rt_msg_t rtmsg;
	int flags;
	
	memset(&rtmsg, 0, sizeof(struct rt_msg_t));
	flags = RTF_STATIC;
	flags |= RTF_UP;
	flags |= RTF_HOST;
	flags |= RTF_GATEWAY;
	return (libroute_modify(h, &rtmsg, dest, NULL, RTM_DELETE, flags));
}

int
libroute_get(rt_handle *h, struct sockaddr* dest){
	struct rt_msg_t rtmsg;
	int flags;
	
	memset(&rtmsg, 0, sizeof(struct rt_msg_t));
	flags = RTF_STATIC;
	flags |= RTF_UP;
	flags |= RTF_HOST;
	return (libroute_modify(h, &rtmsg, dest, NULL, RTM_GET, flags));
}

static void
fill_rtmsg(rt_handle *h, struct rt_msg_t *routemsg, int operation, int flags)
{
	rt_msg_t *rtmsg = routemsg;
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