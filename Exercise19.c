#include <stdio.h>
#include <math.h>

double productOfNumbers(int n)
{
	int product = 1;
	for(int i = 0; i < n; ++i) {
		product *= i;
	}
	return product;
}

// Function to find The sum of the members of a finite arithmetic progression is called an arithmetic series
double calculateArithmeticSeries(int x, int n)
{

	double sum = 1;
	for (int i = 0; i < n; ++i)
	{
		// 1 + x^(2*0+1) / 1 + x^(2+1)/6
		sum = sum + pow(x, 2 * i + 1) / productOfNumbers(2 * i + 1);
	};

	return sum;
};

const char TITLE[] = "Find The sum of the members of a finite arithmetic progression is called an arithmetic series \n";
void runEx()
{
	printf("%sS(n) = 1 + x^(2*0+1)/(2*0+1)! + x^(2*1+1)/(2*1+1)! + x^(2*2+1)/(2*2+1)! + ... + x^(2n+1)/(2n+1)! \n", TITLE);

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