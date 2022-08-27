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

int sizeOfArrayMatchCondition(int n, int arr[]) {
	int size = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < 0)
		{
			size++;
		}
	}
	return size;
}

int *negativeNumbers(int n, int arr[], int size)
{
	int *list = (int *)malloc(size);
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < 0)
		{
			list[count] = arr[i];
			count++;
		}
	}
	return list;
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
		printf("\nPlease enter an integer value of item arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}

	printArrayInt(n, arr);
	int size = sizeOfArrayMatchCondition(n, arr);
	int *list = negativeNumbers(n, arr, size);
	printf("\nNegative items: ");
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