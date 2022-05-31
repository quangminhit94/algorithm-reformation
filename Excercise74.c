#include <stdio.h>
#include <math.h>
double productOfNumber(int n) {
	if(n <= 1) return 1;
	return n * productOfNumber(n - 1);
}
double calculateArithmeticSeries(int x, int n)
{
	double sum = 1;

	for (int i = 0; i < n; ++i) {
		sum += pow(-1, i + 1) * (pow(x, 2*i + 1) / productOfNumber(2*i + 1));
	};

	return sum;
};

const char TITLE[] = "Find The sum of the members of a finite arithmetic progression is called an arithmetic series \n";
void runEx()
{
	printf("%sS(x, n) = 1 - x + x^3/3! - x^5/5! + ... + (-1)^(n+1)*(x^(2n+1)/(2n+1)!) \n", TITLE);

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