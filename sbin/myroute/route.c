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

#define	F_ISHOST	0x01
#define	F_FORCENET	0x02
#define	F_FORCEHOST	0x04
#define	F_PROXY		0x08
#define	F_INTERFACE	0x10


static volatile sig_atomic_t stop_read;
static void
stopit(int sig __unused)
{
	stop_read = 1;
}

static struct {
	struct	rt_msghdr m_rtm;
	char	m_space[512];
} m_rtmsg;

typedef struct rt_handle_t {
	int fib;
	int s;
	struct sockaddr_storage so[RTAX_MAX];
	int rtm_addrs;
} rt_handle;


rt_handle * libroute_open(int);
static int	rtmsg(rt_handle*, int, int);


rt_handle *
libroute_open(int fib)
{
	rt_handle *h;

	h = calloc(0, sizeof(*h));

	if (h == NULL) {
		printf("return");
		return (NULL);
	}

	h->fib = fib;
	h->s = socket(PF_ROUTE, SOCK_RAW, 0);

	return (h);
}


static int
libroute_fillso(rt_handle *h, int idx, char *str, int nrflags)
{
	struct sockaddr *sa;
	struct sockaddr_in *sin;

	h->rtm_addrs |= (1 << idx);
	sa = (struct sockaddr *)&(h->so[idx]);
	sa->sa_family = AF_INET;
	sa->sa_len = sizeof(struct sockaddr_in);

	sin = (struct sockaddr_in *)(void *)sa;

	inet_aton(str, &sin->sin_addr);
	return 0;
}

static int
libroute_add(rt_handle *h, char *dest, char *gateway, int af)
{
	struct sigaction sa;
	int flags = RTF_STATIC;
	int nrflags = 0;

	sigemptyset(&sa.sa_mask);
	sa.sa_flags = 0;
	sa.sa_handler = stopit;

	libroute_fillso(h, RTAX_DST, dest, nrflags);
	
	nrflags |= F_ISHOST;

	libroute_fillso(h, RTAX_GATEWAY, gateway, nrflags);

	flags |= RTF_UP;
	flags |= RTF_HOST;

	setsockopt(h->s, SOL_SOCKET, SO_SETFIB, (void *)&(h->fib),sizeof(h->fib));
	int error = rtmsg(h, flags, h->fib);

	return error;
}

static int
rtmsg(rt_handle *h, int flags, int fib)
{
	int rlen;
	char *cp = m_rtmsg.m_space;
	int l, rtm_seq;
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
	rtm.rtm_type = RTM_ADD;
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

int
main(int argc, char **argv)
{

	argc -= optind;
	argv += optind;

	char *dest = argv[1];
	char *gateway = argv[2];

	int defaultfib;
	size_t len = sizeof(defaultfib);
	sysctlbyname("net.my_fibnum", (void *)&defaultfib, &len, NULL,0);

	rt_handle *h = libroute_open(defaultfib);

	if(h == NULL)
		printf("failed to create handle\n");

	libroute_add(h, dest, gateway, AF_INET);

	return 0;

}