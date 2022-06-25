#include <stdio.h>
#include <math.h>

double calculateArithmeticSeries(int n)
{
	double sum = sqrt(0);
	if(n == 0) return 0;
	for (int i = 0; i < n; ++i)
	{
		// 1 square sign, n = 1 -> S = sqrt(0+1 + sum) = sqrt(1 + sqrt(0))
		// 2 square sign, n = 2 -> S = sqrt(1+1 + sum(0)) = sqrt(2 + sqrt(1))
		// 3 square sign, n = 3 -> S = sqrt(2+1 + sum(1)) = sqrt(3 + sqrt(2 + sqrt(1)))
		sum = sqrt(i + 1 + sum);
	};

	return sum;
};

const char TITLE[] = "Find The sum of the members of a finite arithmetic progression is called an arithmetic series \n";
void runEx()
{
	printf("%sS(n) = sqrt(n + sqrt(n-1 + sqrt(n-2 + ... sqrt(2 + sqrt(1))))) \n", TITLE);

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