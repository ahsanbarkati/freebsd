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
int	rtmsg(rt_handle*, int, int);
int libroute_fillso(rt_handle *h, int, struct sockaddr*);
int libroute_modify(rt_handle*, struct sockaddr*, struct sockaddr*, int);
int libroute_add(rt_handle*, struct sockaddr*, struct sockaddr*);
int libroute_change(rt_handle*, struct sockaddr*, struct sockaddr*);
int libroute_del(rt_handle*, struct sockaddr*);
struct sockaddr* str_to_sockaddr(char *);
