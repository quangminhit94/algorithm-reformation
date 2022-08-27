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

int isFirstDigitOdd(int n)
{
	int firstDigit = 0;
	for (int i = n; i > 0; i /= 10)
	{
		firstDigit = i % 10;
	}
	if (firstDigit % 2 == 1)
	{
		return 1;
	}
	return 0;
}


int sizeOfArrayMatchCondition(int n, int arr[]) {
	int size = 0;
	for (int i = 0; i < n; i++)
	{
		if (isFirstDigitOdd(arr[i]))
		{
			size++;
		}
	}
	return size;
}

int *itemsFirstDigitOdd(int n, int *arr, int size)
{
	int *list = (int *)malloc(size);
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (isFirstDigitOdd(arr[i]))
		{
			list[count] = arr[i];
			count++;
		}
	}
	return list;
}

const char TITLE[] = "Input an array positive int. Return prime items have first digit odd\n";
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
	int *list = itemsFirstDigitOdd(n, arr, size);
	printf("\nItems have first digit odd: ");
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