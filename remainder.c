#include <stdio.h>

void main() {
	int numer, denom;
	
	
	printf("Enter a numerator: ");
       	scanf("%d", &numer);
	printf("Enter a denominator: ");
	scanf("%d", &denom);

	int remainder = numer % denom; 

	if (remainder) {
		printf("There is a remainder!");
	} else {
		printf("There is NOT a remainder!");
	}
	
}
