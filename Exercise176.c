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

int *negativeNumbers(int n, int arr[])
{
	// remove positive number from arr
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
		{
			arr[i] = 0;
		}
	}
	return arr;
}

const char TITLE[] = "Input an array int. Return negative numbers\n";
void runEx()
{
	// Array = [9, -19, -29] -> -19 -29
	printf("%sArray = [9, -19, -29] -> -19 -29\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of array size n: ");
	scanf("%d", &n);

	// input real number array
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		printf("\nPlease enter an integer value of item: ");
		scanf("%d", &arr[i]);
	}

	printArrayInt(n, arr);
	int *negative = negativeNumbers(n, arr);
	for (int i = 0; i < n; i++)
	{
		if (negative[i] != 0)
		{
			printf("%d ", negative[i]);
		}
	}
	printf("\n");
}

int main(void)
{
	runEx();
	return 0;
}