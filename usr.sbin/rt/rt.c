#include <stdio.h>
#include <libroute.h>

int
main(int argc, char **argv)
{
	char *cmd, *dest, *gateway;
	argc -= optind;
	argv += optind;

	cmd = argv[0];

	struct sockaddr *sa_dest, *sa_gateway;
	int defaultfib;
	size_t len = sizeof(defaultfib);
	sysctlbyname("net.my_fibnum", (void *)&defaultfib, &len, NULL,0);

	rt_handle *h = libroute_open(defaultfib);

	if(h == NULL)
		printf("failed to create handle\n");

	if(strcmp(cmd,"add") == 0)
	{
		dest = argv[1];
		gateway = argv[2];
		sa_dest = str_to_sockaddr(dest);
		sa_gateway = str_to_sockaddr(gateway);
		libroute_add(h, sa_dest, sa_gateway);
	}
	else if(strcmp(cmd, "del") == 0)
	{
		dest = argv[1];
		sa_dest = str_to_sockaddr(dest);
		libroute_del(h, sa_dest);
	}
	else if(strcmp(cmd, "add6") == 0)
	{
		dest = argv[1];
		gateway = argv[2];
		sa_gateway = str_to_sockaddr6(gateway);
		sa_dest = str_to_sockaddr6(dest);
		libroute_add(h, sa_dest, sa_gateway);
	}
	else if(strcmp(cmd, "del6") == 0)
	{
		dest = argv[1];
		sa_dest = str_to_sockaddr6(dest);
		libroute_del(h, sa_dest);
	}
	else
		printf("not a valid command\n");
	return 0;
}
