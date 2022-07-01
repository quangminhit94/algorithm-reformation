#include <stdio.h>

void findPrimeNumbers(int n)
{
	// prime of number 5 is 1 and 5
	// have no divisor but only 1 and n
	for (int i = 2; i <= n - 1; ++i)
	{
		if (n % i != 0)
		{
			printf("\n%d is a prime number\n", n);
			break;
		} else {
			printf("\n%d is not a prime number\n", n);
			break;
		}
	};
}

const char TITLE[] = "Find all divisor numbers of a number \n";
void runEx()
{
	printf("%sDivisor of 18 is 1, 2, 3, 6, 9, 18 \n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	findPrimeNumbers(n);
};

int main(void)
{
	runEx();
	return 0;
}