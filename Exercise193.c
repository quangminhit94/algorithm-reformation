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

int isNumberPowerOf3(int n)
{
	// is number has type 3^k
	for (int i = 1; i <= n; i++)
	{
		if (pow(3, i) == n)
		{
			return 1;
		}
	}
	return 0;
}

int *itemsFirstDigitEven(int n, int arr[])
{
	int *list = (int *)malloc(n);
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (isNumberPowerOf3(arr[i]))
		{
			list[count] = arr[i];
			count++;
		}
	}
	return list;
}

const char TITLE[] = "Input an array positive int. Return items have type 3^k\n";
void runEx()
{
	// Array = [45, 5, 7, 9, 2] -> 9
	printf("%sArray = [45, 5, 7, 9, 2] -> 9\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of array size n: ");
	scanf("%d", &n);

	// input real number array
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		printf("\nPlease enter an integer value of item: ");
		scanf("%d", &arr[i]);
		if(arr[i] < 0)
		{
			printf("\nIndex %d, Please enter a positive number\n", i);
			i--;
		}
	}

	printArrayInt(n, arr);

	int *list = itemsFirstDigitEven(n, arr);
	printf("\nItems have type 3^k: ");
	for (int i = 0; i < n; i++)
	{
		if (list[i] != 0)
		{
			printf("%d ", list[i]);
		}
	}
	printf("\n");
}

int main(void)
{
	runEx();
	return 0;
}