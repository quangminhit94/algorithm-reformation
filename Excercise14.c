#include <stdio.h>
#include <math.h>

// Function to find The sum of the members of a finite arithmetic progression is called an arithmetic series
int calculateArithmeticSeries(int x, int n)
{
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		printf("\n%lf", pow(x, i * 2 + 1));
		sum = sum + pow(x, i * 2 + 1);
	};

	return sum;
};

const char TITLE[] = "Find The sum of the members of a finite arithmetic progression is called an arithmetic series \n";
void runEx()
{
	printf("%sS(n) = x^1 + x^3 + x^5 + ... + x^(2n+1) \n", TITLE);

	unsigned int x;
	printf("\nPlease enter an integer value of x: ");
	scanf("%d", &x);
	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	printf("S(%d, %d) = %d \n", x, n, calculateArithmeticSeries(x, n));
};

int main(void)
{
	runEx();
	return 0;
}