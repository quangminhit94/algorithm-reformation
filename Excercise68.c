#include <stdio.h>
#include <math.h>
double calculateArithmeticSeries(int x, int n)
{
	double sum = 0;

	for (int i = 1; i <= n; ++i) {
		sum += pow(-1, i) * pow(x, 2.0 * i);
	};

	return sum;
};

const char TITLE[] = "Find The sum of the members of a finite arithmetic progression is called an arithmetic series \n";
void runEx()
{
	printf("%sS(x, n) = - x^2 + x^4 + ... + (-1)^n*x^2n \n", TITLE);

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