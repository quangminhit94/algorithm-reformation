#include <stdio.h>
#include <math.h>

double calculateArithmeticSeries(int n)
{
	double sum = sqrt(2);
	for (int i = 1; i < n; ++i)
	{
		// 1 -> sum(1) = sqrt(2 + sum(0)) = sqrt(2 + sqrt(2))
		// 2 -> sum(2) = sqrt(2 + sum(1)) = sqrt(2 + sqrt(2 + sqrt(2)))
		sum = sqrt(2 + sum);
	};

	return sum;
};

const char TITLE[] = "Find The sum of the members of a finite arithmetic progression is called an arithmetic series \n";
void runEx()
{
	printf("%sS(n) = sqrt(2 + sqrt(2 + sqrt(2 + ... sqrt(2 + sqrt(2))))) \n", TITLE);

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