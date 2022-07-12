#include <stdio.h>

// ax + b = 0 -> x = -b/a
// a = 0 -> b = 0 -> x = undefined
// a = 0, b = 0 -> 0 = 0 -> x is infinitely many roots
void findXWithAbZero(int a, int b) {
	if(a == 0 && b == 0) {
		printf("x is infinitely many roots\n");
	}
	else if(a == 0) {
		printf("x is undefined\n");
	}
}
void findXWithAbNonZero(int a, int b)
{
	if(a != 0 && b != 0) {
		double x;
		x = b * -1.0 / a;
		printf("x = %lf\n", x);
	}
};

const char TITLE[] = "ax + b = 0 \n";
void runEx()
{
	printf("%sx = ? \n", TITLE);

	unsigned int a;
	printf("\nPlease enter an integer value of a: ");
	scanf("%d", &a);
	unsigned int b;
	printf("\nPlease enter an integer value of b: ");
	scanf("%d", &b);

	printf("%dx + %d = 0\n", a, b);

	findXWithAbZero(a, b);
	findXWithAbNonZero(a, b);
};

int main(void)
{
	runEx();
	return 0;
}