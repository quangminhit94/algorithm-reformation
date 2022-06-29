#include <stdio.h>
#include <math.h>

void checkNumber(double a, double b)
{
	if (a >= 0 && b >= 0 || a < 0 && b < 0)
		printf("%lf and %lf is the same sign\n", a, b);
	else
		printf("%lf and %lf is NOT the same sign\n", a, b);
};

const char TITLE[] = "Check a, b is the same sign or not \n";
void runEx()
{
	printf("%s", TITLE);

	double a;
	printf("\nPlease enter an integer value of a: ");
	scanf("%lf", &a);
	double b;
	printf("\nPlease enter an integer value of b: ");
	scanf("%lf", &b);

	checkNumber(a, b);
};

int main(void)
{
	runEx();
	return 0;
}