#include <stdio.h>
#include <math.h>

int productNumbers(int n)
{
	int sum = 1;

	for (int i = 1; i <= n; ++i) {
		sum = sum * i;
	};

	return sum;
};

double squareNumber(int number) {
	double sum = 0;
	for(int i = number; i > 1; --i) {
		sum = pow(productNumbers(i) + sum, 1.0 / (i + 1));
	}
	return sum;
}

const char TITLE[] = "Find The sum of the members of a finite arithmetic progression is called an arithmetic series \n";
void runEx() 
{
	printf("%sS(n) = sqrtRoot(n+1)(n! + sqrtRoot(n)((n-1)! + ... sqrtRoot(3)(2! + sqrt(1!)))) \n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
   scanf("%d", &n);

   printf("S(%d) = %lf \n", n, squareNumber(n));
};

int main(void) {
   runEx();
   return 0;
}