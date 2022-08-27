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

int isPositive(int n)
{
	if (n < 0)
		return 0;
	return 1;
}

double averageProductOfItems(int n, int arr[])
{
	int product = 1;
	double count = 0;
	for (int i = 0; i < n; i++)
	{
		if (isPositive(arr[i]))
		{
			product *= arr[i];
			count++;
		}
	}
	double average = product / count;
	return average;
}

const char TITLE[] = "Input an array int. Average product of items, item is positive number\n";
void runEx()
{
	// Array = [5, -27, -9, 2] -> (5 * 2) / 2 = 5
	printf("%sArray = [5, -27, -9, 2] -> (5 * 2) / 2 = 5\n", TITLE);

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

	double average = averageProductOfItems(n, arr);
	printf("\nAverage of positive items in array: %lf", average);
	printf("\n");
}

int main(void)
{
	runEx();
	return 0;
}