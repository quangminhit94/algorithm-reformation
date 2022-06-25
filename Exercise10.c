#include <stdio.h>
#include <math.h>

double powerOfTwoNumbers(int x, int n)
{

	return pow(x, n);
};

const char TITLE[] = "Find The power Of TwoNumbers \n";
void runEx()
{
	printf("%sT(x, n) = x ^ n \n", TITLE);

	unsigned int x;
	printf("\nPlease enter an integer value of x: ");
	scanf("%d", &x);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	printf("T(%d, %d) = %lf \n", x, n, powerOfTwoNumbers(x, n));
};

int main(void)
{
	runEx();
	return 0;
}