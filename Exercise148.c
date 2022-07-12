#include <stdio.h>
#include <math.h>

void printArrayIntPositive(int n, int arr[])
{
	printf("Your array: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int isPrime(int n){
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int lastPrimeNumberOfArrayInt(int n, int arr[])
{
	int lastPrimeNumber = -1;
	for (int i = n - 1; i >= 0; i--)
	{
		if (isPrime(arr[i]))
		{
			return arr[i];
		}
	}
	
	return lastPrimeNumber;
}

const char TITLE[] = "Find last prime number of an array int\n";
void runEx()
{
	printf("%sif array has no prime number return -1\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	// input positive array
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		printf("\nPlease enter an integer value of item: ");
		scanf("%d", &arr[i]);
		if (arr[i] < 0)
		{
			printf("\nError: item must be greater than 0\n");
			return;
		}
	}

	printArrayIntPositive(n, arr);

	int result = lastPrimeNumberOfArrayInt(n, arr);

	if(result == -1)
	{
		printf("No prime number\n");
	}
	else
	{
		printf("Last prime number: %d\n", result);
	}
}

int main(void)
{
	runEx();
	return 0;
}