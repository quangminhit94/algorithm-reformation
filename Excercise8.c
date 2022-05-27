#include <stdio.h>

// Function to find The sum of the members of a finite arithmetic progression is called an arithmetic series
double calculateArithmeticSeries(int n)
{
	double sum = 0.0;

	for (int i = 1; i <= n; ++i) {
		sum = sum + (2.0 * i + 1) / (2.0 * i + 2);
	};

	return sum;
};

const char TITLE[] = "Find The sum of the members of a finite arithmetic progression is called an arithmetic series \n";
void runEx() 
{
	printf("%s1/2 + 3/4 + 5/6 + ... + (2n + 1)/(2n + 2) \n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
   scanf("%d", &n);

   printf("S(%d) = %lf \n", n, calculateArithmeticSeries(n));
};

int main(void) {
   runEx();
   return 0;
}