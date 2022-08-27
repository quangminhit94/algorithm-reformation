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

int sumOfItems(int n, int arr[])
{
	int sum = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (abs(arr[i]) > arr[i + 1])
		{
			printf("abs(%d) > %d\n", arr[i], arr[i + 1]);
			sum += arr[i];
		}
	}
	return sum;
}

const char TITLE[] = "Input an array int. Sum of items, abs of item is more than next item in the array\n";
void runEx()
{
	// Array = [5, 7, 9, 2] -> 21
	printf("%sArray = [5, 7, 9, 2] -> 21\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of array size n: ");
	scanf("%d", &n);

	// input real number array
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		printf("\nPlease enter an integer value of item arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}

	printArrayInt(n, arr);

	int sum = sumOfItems(n, arr);
	printf("\nSum of items in array: %d", sum);
	printf("\n");
}

int main(void)
{
	runEx();
	return 0;
}