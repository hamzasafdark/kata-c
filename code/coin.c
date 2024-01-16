#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int flip, heads, tails;

	int count;
	time_t t;
	srand((unsigned)time(&t));

	printf("How many times would you like to flip a coin? ");
	scanf("%d", &count);

	for (int i=0; i < count; i++) {
		flip = rand() % 2;

		if (flip == 0) {
			tails += 1;
		} else {
			heads += 1;
		}
	}

	printf("After flipping the coin %d times, the results were \n%d heads \n%d tails \n", 
		count, heads, tails);                                                                                  
}
