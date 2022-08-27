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

double averageSumOfItems(int n, int arr[])
{
	int sum = 0;
	double count = 0;
	for (int i = 0; i < n; i++)
	{
		if(isPrime(arr[i])) {
			sum += arr[i];
			count++;
		}
	}
	double average = sum / count;
	return average;
}

const char TITLE[] = "Input an array int. Average sum of items, item is prime\n";
void runEx()
{
	// Array = [5, 27, 9, 2] -> (5 + 2) / 2 = 3.5
	printf("%sArray = [5, 27, 9, 2] -> 27 + 2 = 29\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of array size n: ");
	scanf("%d", &n);

	// input positive number array
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

	double average = averageSumOfItems(n, arr);
	printf("\nSum of items in array: %lf", average);
	printf("\n");
}

int main(void)
{
	runEx();
	return 0;
}