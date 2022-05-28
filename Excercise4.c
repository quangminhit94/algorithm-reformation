#include <stdio.h>

// Function to find The sum of the members of a finite arithmetic progression is called an arithmetic series
double calculateArithmeticSeries(int n)
{
	double sum = 0.0;

	for (int i = 1; i <= n; ++i) {
		sum = sum + 1.0 / (2 * i);
	};

	return sum;
};

const char TITLE[] = "Find The sum of the members of a finite arithmetic progression is called an arithmetic series \n\0";
void runEx() 
{
	printf("%sS(n) = 1/2 + 1/4 + 1/6 + ... + 1/2n \n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
   scanf("%d", &n);

   printf("S(%d) = %lf \n", n, calculateArithmeticSeries(n));
};

int main(void) {
   runEx();
   return 0;
}