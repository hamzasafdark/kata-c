#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>

struct addrinfo {
	int ai_flags;
	int ai_family;
	int ai_socktype;
	int ai_protocol;
	size_t ai_addrelen;
	struct sockaddr *ai_addr;
	char *ai_canonname;

	strucut addrinfo *ai_next;
};

struct sockaddr {
	unsigned short sa_family;
	char sa_data[14];
};

int main() {

}
