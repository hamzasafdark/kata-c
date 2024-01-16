#include <stdio.h>

void main() {
	int number;

	printf("Enter number between 1 and 500: ");
	scanf("%d", &number); 

	if (number > 0 && number <= 100){
		printf("Your number is between 1 and 100\n");	
	} else if (number > 100 && number <= 200){
		printf("Your number is between 101 and 200\n");	

	} else if (number > 200 && number <= 300){ 
		printf("Your number is between 201 and 300\n");	

	} else if (number > 300 && number <= 400){ 
		printf("Your number is between 301 and 400\n");	

	} else if (number > 400 && number <= 500){ 
		printf("Your number is between 401 and 500\n");	

	} else {
		printf("Sorry, your number is not in our range");
	}
}
