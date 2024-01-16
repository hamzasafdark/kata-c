#include <stdio.h>

#define PI 3.14
void main() {
	float radius;
	float area;
	printf("Enter the radius of the circle: ");
	scanf("%f", &radius);
	area = PI * radius * radius;
	printf("The area of the circle: %.2f", area);
}
