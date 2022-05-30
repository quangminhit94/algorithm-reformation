#include <stdio.h>
#include <math.h>

double squareNumber(int number) {
	double sum = 0;
	for(int i = number; i > 0; --i) {
		sum = sqrt(i + sum);
		printf("%lf: ", sum);
	}
	return sum;
}

const char TITLE[] = "Find The sum of the members of a finite arithmetic progression is called an arithmetic series \n";
void runEx() 
{
	printf("%sS(n) = sqrt(1 + sqrt(2 + sqrt(3 + ... sqrt(n-1 + sqrt(n))))) \n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
   scanf("%d", &n);

   printf("S(%d) = %lf \n", n, squareNumber(n));
};

int main(void) {
   runEx();
   return 0;
}