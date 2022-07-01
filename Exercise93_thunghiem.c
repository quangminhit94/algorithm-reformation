#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int *findPrimeNumbers(int n)
{
	// find prime numbers from 1 to n
	int *primeNumbers = (int *)malloc(sizeof(int) * n);
	int primeCount = 0;
	for(int i = 1; i <= n; i++)
	{
		int isPrime = 1;
		for(int j = 2; j <= sqrt(i); j++)
		{
			if(i % j == 0)
			{
				isPrime = 0;
				break;
			}
		}
		if(isPrime)
		{
			primeNumbers[primeCount] = i;
			primeCount++;
		}
	}
	return primeNumbers;
}

const char TITLE[] = "Find all divisor numbers of a number \n";
void runEx()
{
	printf("%sDivisor of 18 is 1, 2, 3, 6, 9, 18 \n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	int *primeNumbers = findPrimeNumbers(n);
	for(int i = 0; i < n; i++)
	{
		printf("%d ", primeNumbers[i]);
	}
};

int main(void)
{
	runEx();
	return 0;
}