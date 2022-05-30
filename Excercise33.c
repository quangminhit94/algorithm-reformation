#include <stdio.h>
#include <math.h>

// Function to find The sum of the members of a finite arithmetic progression is called an arithmetic series
double calculateArithmeticSeries(int n)
{
	double sum = 0;
	for (int i = 0; i < n; ++i) {
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

int main(void) {
   runEx();
   return 0;
}