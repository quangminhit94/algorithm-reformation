#include <stdio.h>
#include <math.h>

double squareNumber(int number) {
	double sum = 0;
	for(int i = number; i > 2; --i) {
		sum = pow(i + sum, 1.0 / i);
	}
	return sum;
}

const char TITLE[] = "Find The sum of the members of a finite arithmetic progression is called an arithmetic series \n";
void runEx() 
{
	printf("%sS(n) = sqrtRoot(n)(n + sqrtRoot(n-1)(n-1 + ... sqrtRoot(3)(3 + sqrt(2)))) \n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
   scanf("%d", &n);

   printf("S(%d) = %lf \n", n, squareNumber(n));
};

int main(void) {
   runEx();
   return 0;
}