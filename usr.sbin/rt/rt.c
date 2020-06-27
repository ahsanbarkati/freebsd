#include <stdio.h>
#include <libroute.h>

int
main(int argc, char **argv)
{

	argc -= optind;
	argv += optind;

	char *dest = argv[1];
	char *gateway = argv[2];

	struct sockaddr *sa_dest, *sa_gateway;
	int defaultfib;
	size_t len = sizeof(defaultfib);
	sysctlbyname("net.my_fibnum", (void *)&defaultfib, &len, NULL,0);

	rt_handle *h = libroute_open(defaultfib);

	if(h == NULL)
		printf("failed to create handle\n");

	sa_dest = str_to_sockaddr(dest);
	sa_gateway = str_to_sockaddr(gateway);

	libroute_add(h, sa_dest, sa_gateway);
//	libroute_del(h, dest);

	return 0;

}
