#include <stdio.h>
#include <string.h>

void hello(void)
{
	char array[] = {72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33, '\0'};
	char array2[] = {72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33};
 
	printf("Print: \n");
	printf("%s", array);
	printf("%s", array2);

	printf("\n\nPuts: \n");
	puts(array);
	puts(array2);
}

int main(void) 
{
	hello();
}
