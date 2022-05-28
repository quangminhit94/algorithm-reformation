#include <stdio.h>

// Function to find The sum of the members of a finite arithmetic progression is called an arithmetic series
int calculateArithmeticSeries(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	// Brute Force
	int bruteForceArray[n + 1];
	bruteForceArray[0] = 1;

	int sum = 0;
	for (int i = 1; i <= n; ++i)
	{
		bruteForceArray[i] = bruteForceArray[i - 1] * i;
		sum = sum + bruteForceArray[i];
	};

	return sum;
};

const char TITLE[] = "Find The sum of the members of a finite arithmetic progression is called an arithmetic series \n\0";
void runEx()
{
	printf("%sS(n) = 1 + 1*2 + 1*2*3 + 1*2*3*...*n \n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	printf("S(%d) = %d \n", n, calculateArithmeticSeries(n));
};

int main(void)
{
	runEx();
	return 0;
}