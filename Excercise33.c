#include <stdio.h>
#include <math.h>

double calculateArithmeticSeries(int n)
{
	double sum = 0;
	if(n == 0) return 0;
	for (int i = 0; i < n; ++i)
	{
		// 1 square sign, n = 1 -> S = sqrt(2 + sum(0)) = sqrt(2 + 0)
		// 2 square sign, n = 2 -> S = sqrt(2 + sum(1)) = sqrt(2 + sqrt(2))
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