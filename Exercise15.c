#include <stdio.h>

double sumOfNumbers(int n) {
	if(n <= 1) 
		return 1;
	return n + sumOfNumbers(n - 1);
}

// Function to find The sum of the members of a finite arithmetic progression is called an arithmetic series
double calculateArithmeticSeries(int n)
{
	if (n <= 1)
		return 1.0;
	// Brute Force
	double bruteForceArray[n + 1];
	bruteForceArray[0] = 0;

	double sum = 0;
	for (int i = 1; i <= n; ++i)
	{
		bruteForceArray[i] = 1.0 / sumOfNumbers(i);
		sum = sum + bruteForceArray[i];
	};

	return sum;
};

const char TITLE[] = "Find The sum of the members of a finite arithmetic progression is called an arithmetic series \n";
void runEx()
{
	printf("%sS(n) = 1/(0+1) + 1/(1+2) + 1/(1+2+3) + ... + 1/(1+2+...+n) \n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	printf("S(%d) = %lf \n", n, calculateArithmeticSeries(n));
};

int main(void)
{
	runEx();
	return 0;
}