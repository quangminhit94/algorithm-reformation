#include <stdio.h>
#include <math.h>

double sumOfFraction(int number)
{
	double sum = 1;
	for (int i = 1; i <= number; ++i)
	{
		// i = 1 -> sum = 1 / (1 + 1)
		// i = 2 -> sum = 1 / (1 + sum(1))
		// i = 3 -> sum = 1 / (1 + sum(2))
		sum = 1 / (1 + sum);
	}
	return sum;
}

const char TITLE[] = "Find The sum of the members of a finite arithmetic progression is called an arithmetic series \n";
void runEx()
{
	printf("%sS(n) = 1/(1 + (1/(1 + ... 1 / 1 + (1 / (1+1)))) \n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	printf("S(%d) = %lf \n", n, sumOfFraction(n));
};

int main(void)
{
	runEx();
	return 0;
}