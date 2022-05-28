#include <stdio.h>
#include <math.h>

// Function to find The sum of the members of a finite arithmetic progression is called an arithmetic series
int calculateArithmeticSeries(int x, int n)
{
	int sum = 0;
	for (int i = 1; i <= n; ++i)
	{
		sum = sum + pow(x, i * 2);
	};

	return sum;
};

const char TITLE[] = "Find The sum of the members of a finite arithmetic progression is called an arithmetic series \n";
void runEx()
{
	printf("%sS(n) = x^2 + x^4 + x^8 + ... + x^2n \n", TITLE);

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