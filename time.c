#include <stdio.h>

void main(){
	float seconds, minutes, hours;	
	int time, remainingTime;

	printf("Enter the number of seconds: ");
	scanf("%d", &time);

        hours = time / 3600;
        remainingTime = time - (hours * 3600);
        minutes = remainingTime / 60; 
        seconds = remainingTime - (minutes * 60);


	printf("%d seconds is equal to %.0f hours, %.0f minutes and %0.f seconds", time, hours, minutes, seconds);	
}
