#include <stdio.h>
#include <math.h>
double calculateArithmeticSeries(int x, int y)
{
	return pow(x, y);
};

const char TITLE[] = "Find The sum of the members of a finite arithmetic progression is called an arithmetic series \n";
void runEx()
{
	printf("%sS(n) = x^y \n", TITLE);
	unsigned int x;
	printf("\nPlease enter an integer value of x: ");
	scanf("%d", &x);
	if (x < 0)
	{
		printf("\nx must be positive integer\n");
		return;
	}

	unsigned int y;
	printf("\nPlease enter an integer value of y: ");
	scanf("%d", &y);
	// check n is positive integer
	if (y < 0)
	{
		printf("\ny must be positive integer\n");
		return;
	}

	printf("S(%d) = %lf \n", y, calculateArithmeticSeries(x, y));
};

int main(void)
{
	runEx();
	return 0;
}