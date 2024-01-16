#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c;
	double posResult, negResult, squareRoot;
	
	printf("Enter value of A: ");
	scanf("%lf", &a);


	printf("Enter value of B: ");
	scanf("%lf", &b);

	printf("Enter value of C: ");
	scanf("%lf", &c);

	squareRoot = sqrt((b*b) - (4*a*c));
			

	posResult = ((-1 * b) + squareRoot)/(2*a);
	negResult = ((-1 * b) - squareRoot)/(2*a);

	printf("The pos result is %f, The neg result is %f", posResult, negResult);
}
