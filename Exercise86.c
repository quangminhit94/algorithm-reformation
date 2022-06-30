#include <stdio.h>
#include <math.h>
double sumOfNumber(int n) {
	double sum = 0;
	for(int i = 1; i <= n; ++i) {
		sum += pow(i, 3);
	}
	return sum;
}

const char TITLE[] = "Find The sum of the members of a finite arithmetic progression is called an arithmetic series \n";
void runEx()
{
	printf("%sS(n) = 1^3 + 2^3 + 3^3 + ... + n^3 \n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	printf("S(%d) = %lf \n", n, sumOfNumber(n));
};

int main(void)
{
	runEx();
	return 0;
}