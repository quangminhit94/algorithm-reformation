#include <stdio.h>
#include <math.h>

double productOfNumbers(int n)
{
	if (n <= 1)
		return 1;
	return n * productOfNumbers(n - 1);
}

// Function to find The sum of the members of a finite arithmetic progression is called an arithmetic series
double calculateArithmeticSeries(int x, int n)
{

	double sum = 1;
	for (int i = 1; i <= n; ++i)
	{
		sum = sum + pow(x, 2 * i) / productOfNumbers(2 * i);
	};

	return sum;
};

const char TITLE[] = "Find The sum of the members of a finite arithmetic progression is called an arithmetic series \n";
void runEx()
{
	printf("%sS(n) = 1 + x^(2*1)/(2*1)! + x^(2*2)/(2*2)! + ... + x^2n/(2n)! \n", TITLE);

	unsigned int x;
	printf("\nPlease enter an integer value of x: ");
	scanf("%d", &x);
	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	printf("S(%d, %d) = %lf \n", x, n, calculateArithmeticSeries(x, n));
};

int main(void)
{
	runEx();
	return 0;
}