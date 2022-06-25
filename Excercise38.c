#include <stdio.h>
#include <math.h>

// n = 1 -> sqrtRoot(2)(1)
// n = 2 -> sqrtRoot(3)(2 + sqrt(1))
double squareNumber(int number)
{
	double sum = 0;
	for (int i = 1; i <= number; ++i)
	{
		// i = 1 -> sum = sqrtRoot(2)(1)
		// i = 2 -> sum = sqrtRoot(3)(2 + sqrtRoot(2)(1))
		sum = pow(i + sum, 1.0 / (i + 1));
	}
	return sum;
}

const char TITLE[] = "Find The sum of the members of a finite arithmetic progression is called an arithmetic series \n";
void runEx()
{
	printf("%sS(n) = sqrtRoot(n+1)(n + sqrtRoot(n)(n-1 + ... sqrtRoot(3)(2 + sqrt(1)))) \n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	printf("S(%d) = %lf \n", n, squareNumber(n));
};

int main(void)
{
	runEx();
	return 0;
}