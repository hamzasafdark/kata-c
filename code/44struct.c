#include <stdio.h>

struct example {
	int integer;
};

int main() {
	struct example *ptr; 
	struct example tst;

	ptr = &tst;

	tst.integer = 5;
	printf("%d\n", tst.integer);

	(*ptr).integer = 6;
	printf("%d\n", (*ptr).integer); 	

	ptr->integer = 7; 
	printf("%d\n", ptr->integer);
}
