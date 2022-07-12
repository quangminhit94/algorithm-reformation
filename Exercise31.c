#include <stdio.h>
#include <math.h>

// prime of number 5 is 1 and 5
// have no divisor but only 1 and n
int isPrime(int n)
{
	for (int i = 2; i <= sqrt(n); ++i)
	{
		if (n % i == 0)
		{
			return 0;
		}
	};
	return 1;
}

const char TITLE[] = "Find all divisor numbers of a number \n";
void runEx()
{
	printf("%sPrime of 5 is 1 and 5 \n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	if (n < 0)
	{
		printf("Please input an integer value");
		return;
	}

	int prime = 0;
	prime = isPrime(n);
	if (prime == 1)
		printf("\n%d is a prime number\n", n);
	else
		printf("\n%d is not a prime number\n", n);
};

int main(void)
{
	runEx();
	return 0;
}