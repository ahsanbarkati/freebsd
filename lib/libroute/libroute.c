#include <sys/cdefs.h>
__FBSDID("$FreeBSD$");

#include <sys/param.h>
#include <sys/file.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <sys/sysctl.h>
#include <sys/types.h>
#include <sys/queue.h>

#include <net/if.h>
#include <net/route.h>
#include <net/if_dl.h>
#include <netinet/in.h>
#include <netinet/if_ether.h>
#include <arpa/inet.h>
#include <netdb.h>

#include <ctype.h>
#include <err.h>
#include <errno.h>
#include <paths.h>
#include <signal.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sysexits.h>
#include <time.h>
#include <unistd.h>
#include <ifaddrs.h>

#include "libroute.h"

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

int
libroute_fillso(rt_handle *h, int idx, char *str)
{
	struct sockaddr *sa;
	struct sockaddr_in *sin;

	h->rtm_addrs |= (1 << idx);
	sa = (struct sockaddr *)&(h->so[idx]);
	sa->sa_family = AF_INET;
	sa->sa_len = sizeof(struct sockaddr_in);

	sin = (struct sockaddr_in *)(void *)sa;

	if(inet_aton(str, &sin->sin_addr))
		return 0;
	return 1;
}

int
libroute_modify(rt_handle *h, char *dest, char *gateway, int operation)
{
	int flags = RTF_STATIC;

	libroute_fillso(h, RTAX_DST, dest);

	if(gateway != NULL)
		libroute_fillso(h, RTAX_GATEWAY, gateway);

	flags |= RTF_UP;
	flags |= RTF_HOST;

	int error = rtmsg(h, flags, operation);

	return error;
}

int
libroute_add(rt_handle *h, char *dest, char *gateway){
	int error = libroute_modify(h, dest, gateway, RTM_ADD);
	if(error){
		err(1, "Failed to add new route");
	}
	return 0;
}

int
libroute_change(rt_handle *h, char *dest, char *gateway){
	int error = libroute_modify(h, dest, gateway, RTM_CHANGE);
	if(error){
		err(1, "Failed to change route");
	}
	return 0;
}

int
libroute_del(rt_handle *h, char *dest){
	int error = libroute_modify(h, dest, NULL, RTM_DELETE);
	if(error){
		err(1, "Failed to delete route");
	}
	return 0;
}

int
rtmsg(rt_handle *h, int flags, int operation)
{
	int rlen;
	char *cp = m_rtmsg.m_space;
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

	errno = 0;
	memset(&m_rtmsg, 0, sizeof(m_rtmsg));

#define rtm m_rtmsg.m_rtm
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
	rtm.rtm_msglen = l = cp - (char *)&m_rtmsg;

	printf("writing\n");
	rlen = write(h->s, (char *)&m_rtmsg, l);


#undef rtm
	return (0);
}
