#include <stdio.h>
#include <math.h>

double squareNumber(int number) {
	if(number <= 1) return 1;
	return sqrt(number + squareNumber(number - 1));
}

const char TITLE[] = "Find The sum of the members of a finite arithmetic progression is called an arithmetic series \n";
void runEx() 
{
	printf("%sS(n) = sqrt(n + sqrt(n-1 + sqrt(n-2 + ... sqrt(2 + sqrt(1))))) \n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
   scanf("%d", &n);

   printf("S(%d) = %lf \n", n, squareNumber(n));
};

int main(void) {
   runEx();
   return 0;
}