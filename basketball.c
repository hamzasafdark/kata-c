#include <stdio.h>

int main() {
	int games[4][5] = {{},{},{},{}};
	double average[5] = {};
	int totalForPlayer = 0;
	int score;
	double highest = 0;

	for (int i = 0; i < 4;i++) {
		printf("Game#%d\n", i+1);
		for (int j = 0; j < 5; j++){
			printf("Enter scoring total for Player#%d: \n", j+1);
			scanf("%d", &score); 
			games[i][j] = score;
		}
	}

	for (int k = 0; k < 4; k++) {
		for (int l = 0; l < 5; l++) {
			printf("%d ", games[k][l]);	
			totalForPlayer += games[k][l];
			average[l] = totalForPlayer / 4.00; 
		} 

		totalForPlayer = 0;
	}
	
	for (int m = 0; m < 5; m++) {
		printf("\n\nPlayer#%d: %.2f points per game\n", m+1, average[m]);
		if (average[m] > highest) {
			highest = average[m];
		}
	}

	for (int n=0; n< 5; n++) {
		if (highest == average[n]) {
			printf("Player#%d has the highest scoring average at %.2f points per game\n", n+1, average[n]);
		}
	}
}

