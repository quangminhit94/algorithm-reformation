#include <stdio.h>
#include <math.h>

// n = 2 -> sqrt(2! + sqrt(1!))
int productNumbers(int n)
{
	int product = 1;

	for (int i = 1; i <= n; ++i)
	{
		product = product * i;
	};

	return product;
};

double squareNumber(int number)
{
	double sum = 0;
	for (int i = 1; i <= number; ++i)
	{
		// i = 1 -> sum = sqrt(1!)
		// i = 2 -> sum = sqrt(2! + sqrt(1!))
		sum = sqrt(productNumbers(i) + sum);
	}
	return sum;
}

const char TITLE[] = "Find The sum of the members of a finite arithmetic progression is called an arithmetic series \n";
void runEx()
{
	printf("%sS(n) = sqrt(n! + sqrt((n-1)! + sqrt((n-2)! + ... sqrt(2! + sqrt(1))))) \n", TITLE);

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