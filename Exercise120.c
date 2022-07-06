#include <stdio.h>
#include <math.h>

void findSquareNumbers(int n)
{
	// square number is square of a number
	// 25 / 5 = 5
	// divisor number of 25 is 5
	// 5 x chinh no  = 25
	printf("square numbers: ");
	for (int i = n; i > 0; --i)
	{
		if (i * i < n)
		{
			printf("%d ", i * i);
		}
	};
	printf("\n");
}

const char TITLE[] = "Calculate sum of n\n";
void runEx()
{
	printf("%sS(n) = x^1 + x^2 + ... + x^n\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);
	// check x is positive integer
	if (n < 0)
	{
		printf("\nn must be positive integer\n");
		return;
	}
	findSquareNumbers(n);
};

int main(void)
{
	runEx();
	return 0;
}