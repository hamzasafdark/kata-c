#include <stdio.h>

void main( int argc, char *argv[]) {
	if (argc == 3) {
		printf("Hello, %s, %s\n", argv[1], argv[2]);
	} else {
		printf("Usage: ./arg Firstname Lastname\n");
	}
}
