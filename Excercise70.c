#include <stdio.h>
#include <math.h>
double sumOfNumber(int n) {
	if(n <= 1) return 1;
	return n + sumOfNumber(n - 1);
}
double calculateArithmeticSeries(int n)
{
	double sum = 0;

	for (int i = 1; i <= n; ++i) {
		sum += pow(-1, i + 1) * (1 / sumOfNumber(i));
	};

	return sum;
};

const char TITLE[] = "Find The sum of the members of a finite arithmetic progression is called an arithmetic series \n";
void runEx()
{
	printf("%sS(x, n) = 1 - 1/(1+2) + 1/(1+2+3) + ... + (-1)^(n+1)*(1/(1+2+3+...+n)) \n", TITLE);

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