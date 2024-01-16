#include <stdio.h>

void main() {
	int array[] = {1,2,3,4,4,5,6,7,7,8};

	int length = sizeof(array) / sizeof(array[0]);

	printf("The array has %d", length);
}	
