#include <stdio.h>
#include <math.h>
double productOfNumber(int n) {
	double product = 1;
	for(int i = 1; i <= n; ++i) {
		product *= i;
	}
	return product;
}
double calculateArithmeticSeries(int x, int n)
{
	double sum = 0;

	for (int i = 1; i <= n; ++i) {
		sum += pow(-1, i) * (pow(x, i) / productOfNumber(i));
	};

	return sum;
};

const char TITLE[] = "Find The sum of the members of a finite arithmetic progression is called an arithmetic series \n";
void runEx()
{
	printf("%sS(x, n) = - x + x^2/2! - x^3/3! + ... + (-1)^n*(x^n/n!) \n", TITLE);

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