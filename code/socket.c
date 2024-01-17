#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>

struct addrinfo
{
	int ai_flags;
	int ai_family;
	int ai_socktype;
	int ai_protocol;
	size_t ai_addrelen;
	struct sockaddr *ai_addr;
	char *ai_canonname;

	strucut addrinfo *ai_next;
};

struct sockaddr
{
	unsigned short sa_family;
	char sa_data[14];
};

struct sockaddr_in
{
	short int sin_family;
	unsigned short int sin_port;
	struct in_addr sin_addr;
	unsigned char sin_zero[8];
};

struct in_addr
{
	uint32_t s_addr;
};

int main()
{
}
