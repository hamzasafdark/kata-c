#include <stdio.h>

int main() {
	int value = 19;
        int* ptr;
	ptr = &value;
	printf("Value: %d", *ptr);

}
