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

int isAllDigitOdd(int n)
{
	int digit = 0;
	for (int i = n; i > 0; i /= 10)
	{
		digit = i % 10;
		if(digit % 2 == 0)
		{
			return 0;
		}
	}
	return 1;
}

int *itemsAllDigitOdd(int n, int arr[])
{
	int *list = (int *)malloc(n);
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (isAllDigitOdd(arr[i]))
		{
			list[count] = arr[i];
			count++;
		}
	}

	return list;
}

const char TITLE[] = "Input an array positive int. Return items have all digit odd\n";
void runEx()
{
	// Array = [45, 5, 7, 9, 2] -> 5 7 9
	printf("%sArray = [45, 5, 7, 9, 2] -> 5 7 9\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of array size n: ");
	scanf("%d", &n);

	// input positive number array
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

	int *list = itemsAllDigitOdd(n, arr);
	printf("\nItems have all digit odd: ");
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