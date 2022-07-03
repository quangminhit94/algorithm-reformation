#include <stdio.h>

// Function to find The sum of the members of a finite arithmetic progression is called an arithmetic series
int calculateArithmeticSeries(int n)
{
	int sum = 0;

	for (int i = 1; i <= n; ++i)
	{
		sum = sum + i;
	};

	return sum;
};

const char TITLE[] = "Find The sum of the members of a finite arithmetic progression is called an arithmetic series \n";
void runEx()
{
	printf("%sS(n) = 1 + 2 + ... + n \n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);
	// check n is positive integer
	if (n < 0)
	{
		printf("\nn must be positive integer\n");
		return;
	}

	printf("S(%d) = %d \n", n, calculateArithmeticSeries(n));
};

int main(void)
{
	runEx();
	return 0;
}