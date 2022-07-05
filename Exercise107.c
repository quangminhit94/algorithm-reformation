#include <stdio.h>
#include <math.h>
double calculateArithmeticSeries(int x, int n)
{
	return pow(x, 1.0 / n);
};

const char TITLE[] = "Find The sum of the members of a finite arithmetic progression is called an arithmetic series \n";
void runEx()
{
	printf("%sS(n) = sqrt(n)(x) \n", TITLE);
	unsigned int x;
	printf("\nPlease enter an integer value of x: ");
	scanf("%d", &x);
	if (x < 0)
	{
		printf("\nx must be positive integer\n");
		return;
	}

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);
	// check n is positive integer
	if (n < 0)
	{
		printf("\nn must be positive integer\n");
		return;
	}

	printf("S(%d) = %lf \n", n, calculateArithmeticSeries(x, n));
};

int main(void)
{
	runEx();
	return 0;
}