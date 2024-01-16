#include <stdio.h>
#include <stdlib.h>


int main() {
	char *str;

	str = (char *) malloc(5*sizeof(char));

	if (str == NULL) {
		printf("Memory allocation failed");
		return 1;
	} else {
		printf("Memory allocation successfully!");
	}

	return 0;
}
