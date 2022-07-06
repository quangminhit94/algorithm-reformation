#include <stdio.h>
#include <math.h>

int sumOfNumber(int x, int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += pow (x, i);
	}
	return sum;
};

const char TITLE[] = "Calculate sum of n\n";
void runEx()
{
	printf("%sS(n) = x^1 + x^2 + ... + x^n\n", TITLE);
	unsigned int x;
	printf("\nPlease enter an integer value of x: ");
	scanf("%d", &x);
	// check x is positive integer
	if (x < 0)
	{
		printf("\nx must be positive integer\n");
		return;
	}

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);
	// check x is positive integer
	if (n < 0)
	{
		printf("\nn must be positive integer\n");
		return;
	}
	printf("S(%d) = %d \n", n, sumOfNumber(x, n));
};

int main(void)
{
	runEx();
	return 0;
}