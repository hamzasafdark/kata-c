#include <stdio.h>

struct structure {
	int digit;
	char letter;
	double real;
};

int main() {
	struct structure p1;

	p1.digit = 3;
	p1.letter = 'R';
	p1.real = 18.99;

	printf("%d %c %f", p1.digit, p1.letter, p1.real);

	return 0;
}
