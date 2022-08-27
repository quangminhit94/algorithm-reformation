#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void printArrayInt(int n, int arr[])
{
	printf("Your array: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int isPrime(int n)
{
	if (n == 1)
	{
		return 0;
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}


int sizeOfArrayMatchCondition(int n, int arr[]) {
	int size = 0;
	for (int i = 0; i < n; i++)
	{
		if (isPrime(arr[i]))
		{
			size++;
		}
	}
	return size;
}

int *indexOfPrimeItems(int n, int *arr, int size)
{
	int *list = (int *)malloc(size);
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (isPrime(arr[i]))
		{
			list[count] = i;
			count++;
		}
	}
	return list;
}

const char TITLE[] = "Input an array positive int. Return index of prime items\n";
void runEx()
{
	// Array = [45, 5, 7, 9, 2] -> 5 7
	printf("%sArray = [45, 5, 7, 9, 2] -> 5 7\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of array size n: ");
	scanf("%d", &n);

	// input real number array
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		printf("\nPlease enter an integer value of item arr[%d]: ", i);
		scanf("%d", &arr[i]);
		if(arr[i] < 0)
		{
			printf("\nIndex %d, Please enter a positive number\n", i);
			i--;
		}
	}

	printArrayInt(n, arr);

	int size = sizeOfArrayMatchCondition(n, arr);
	int *list = indexOfPrimeItems(n, arr, size);
	printf("\nindex of prime items: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", list[i]);
	}
	printf("\n");
}

int main(void)
{
	runEx();
	return 0;
}