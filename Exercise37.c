#include <stdio.h>
#include <math.h>

// n = 2 -> sqrtRoot(2)(2)
// n = 3 -> sqrtRoot(3)(3 + sqrt(2))
double squareNumber(int number)
{
	double sum = 0;
	for (int i = number; i >= 2; --i)
	{
		// i = 2 -> sum = sqrtRoot(2)(2)
		// i = 3 -> sum = sqrtRoot(3)(3 + sqrtRoot(2)(2))
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

	if (n < 2)
	{
		printf("Please input n >= 2\n");
		return;
	}

	printf("S(%d) = %lf \n", n, squareNumber(n));
};

int main(void)
{
	runEx();
	return 0;
}