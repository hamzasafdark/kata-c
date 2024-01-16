#include <stdio.h>
#include <stdbool.h>

void main() {
	char response;
	bool proceed = true; 
	int index = 0;
	int sum = 0;
	double avg;
	int scores[10] = {};
	int currentScore; 

	printf("Enter a test score: \n");
	scanf("%d", &currentScore);
	scores[index] = currentScore;

	printf("Would you like to continue? Y/N ");
	response = getchar();
	printf("%c", putchar(response));

	while(proceed) {
		if (&response == "Y") {
			printf("Enter a test score: \n");
			scanf("%d", &currentScore);
			index += 1;
			scores[index] = currentScore;
			
			printf("Would you like to continue? Y/N ");
			getchar();
			response = getchar();
			continue;
		} else if (&response == "N") {
			proceed = false;
			int length = sizeof(scores) / sizeof(scores[0]);

			for( int i = 0; i < length; i++) {
				sum += scores[i];
			}
			
			avg = sum / length;

			printf("%.2f is the average", avg);
			break;
		}
	} 


}
