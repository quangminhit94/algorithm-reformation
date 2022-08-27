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

int isMoreThanX(int n, int x)
{
	if (n > x)
		return 1;
	return 0;
}

double averageSumOfItems(int n, int arr[], int x)
{
	int sum = 0;
	double count = 0;
	for (int i = 0; i < n; i++)
	{
		if (isMoreThanX(arr[i], x))
		{
			sum += arr[i];
			count++;
		}
	}
	double average = sum / count;
	return average;
}

const char TITLE[] = "Input an array int, input x. Average sum of items > x\n";
void runEx()
{
	// x = 5, Array = [5, 27, 9, 2] -> (27 + 9) / 2 = 18
	printf("%sx = 5, Array = [5, 27, 9, 2] -> (27 + 9) / 2 = 18\n", TITLE);

	int x;
	printf("\nPlease enter an integer value of x: ");
	scanf("%d", &x);

	unsigned int n;
	printf("\nPlease enter an integer value of array size n: ");
	scanf("%d", &n);

	// input positive number array
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		printf("\nPlease enter an integer value of item arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}

	printArrayInt(n, arr);

	double average = averageSumOfItems(n, arr, x);
	printf("\nAverage sum of items > x in array: %lf", average);
	printf("\n");
}

int main(void)
{
	runEx();
	return 0;
}