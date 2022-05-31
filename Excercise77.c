#include <stdio.h>
#include <math.h>
double sumOfNumber(int n) {
	if(n <= 1) return 1;
	return n + sumOfNumber(n - 1);
}

const char TITLE[] = "Find The sum of the members of a finite arithmetic progression is called an arithmetic series \n";
void runEx()
{
	printf("%sS(n) = 1 + 2 + 3 + ... + n \n", TITLE);

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