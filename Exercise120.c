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

const char TITLE[] = "Find square number less than n\n";
void runEx()
{
	printf("%sif n = 30 square is 25 16 9 4 1\n", TITLE);

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