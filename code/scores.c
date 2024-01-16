#include <stdio.h>
#include <stdbool.h>

int main() {
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

	while(proceed) {
	printf("Would you like to continue? Y/N ");
	getchar();
	response = getchar();
	
	if (response == 'Y' || response == 'y') {
		if (index < 9) {

			printf("Enter a test score: \n");
			scanf("%d", &currentScore);
			index += 1;
			scores[index] = currentScore;
			
		} else {
			printf("Maximum test score coutn reached!\n");
			break;
		}

	} else if (response == 'N' || response == 'n') {
			proceed = false;
			int length = index + 1;

			for( int i = 0; i < length; i++) {
				sum += scores[i];
			}
			
			avg = (double) sum / length;

			printf("%.2f is the average\n", avg);
		}
	} 


}
