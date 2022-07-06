#include <stdio.h>
#include <math.h>

int productNumber(int n) {
	int result = 1;
	for (int i = 1; i <= n; i++) {
		result *= i;
	}
	return result;
}

double calculateArithmeticSeries(int x, int n)
{
	int sum = 0;

	for (int i = 1; i <= n; ++i)
	{
		sum += pow(-1, i) * pow(x, 2 * i + 1) / productNumber(2 * i + 1);
	};
	
	return sin(sum);
};

const char TITLE[] = "Find The sum of the members of a finite arithmetic progression is called an arithmetic series \n";
void runEx()
{
	printf("%ssin(x) = x - x^3/3! + x^5/5! - x^7/7! + x^9/9! - x^11/11! + ... \n", TITLE);

	unsigned int x;
	printf("\nPlease enter an integer value of x: ");
	scanf("%d", &x);
	// check x is positive integer
	if (x < 0)
	{
		printf("\nn must be positive integer\n");
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

	printf("sin(x) = %lf \n", calculateArithmeticSeries(x, n));
};

int main(void)
{
	runEx();
	return 0;
}