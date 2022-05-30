#include <stdio.h>
#include <math.h>

double squareNumber(int x, int number) {
	double sum = 0;
	for(int i = number; i > 0; --i) {
		sum = sqrt(pow(x, i) + sum);
	}
	return sum;
}

const char TITLE[] = "Find The sum of the members of a finite arithmetic progression is called an arithmetic series \n";
void runEx() 
{
	printf("%sS(n) = sqrt(x^n + sqrt(x^(n-1) + ... sqrt(x^2 + sqrt(x)))) \n", TITLE);
	
	unsigned int x;
	printf("\nPlease enter an integer value of x: ");
	scanf("%d", &x);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

   printf("S(%d) = %lf \n", n, squareNumber(x, n));
};

int main(void) {
   runEx();
   return 0;
}