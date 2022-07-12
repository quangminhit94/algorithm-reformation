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
int largestPrimeNumber(int n, int arr[]){
	int largestPrimeNumber = 0;
	for (int i = 0; i < n; i++)
	{
		if (isPrime(arr[i]) && arr[i] > largestPrimeNumber)
		{
			largestPrimeNumber = arr[i];
		}
	}
	return largestPrimeNumber;
}

const char TITLE[] = "Find largest prime number of an array int\n";
void runEx()
{
	printf("%sif array has no prime number return 0\n", TITLE);

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

	int largest = largestPrimeNumber(n, arr);

	if(largest)
	{
		printf("Largest prime number: %d\n", largest);
	}
	else
	{
		printf("No prime number\n");
	}
}

int main(void)
{
	runEx();
	return 0;
}