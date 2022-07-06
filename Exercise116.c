#include <stdio.h>
#include <math.h>

int sumOfNumber(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	return sum;
};

const char TITLE[] = "Calculate sum of n\n";
void runEx()
{
	printf("%sS(n) = 1 + 2 + ... + n\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);
	// check x is positive integer
	if (n < 0)
	{
		printf("\nn must be positive integer\n");
		return;
	}
	printf("S(%d) = %d \n", n, sumOfNumber(n));
};

int main(void)
{
	runEx();
	return 0;
}