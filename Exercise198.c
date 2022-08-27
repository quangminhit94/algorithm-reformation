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

int maxItemValue(int n, int *arr) {
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

int sizeOfArrayMatchCondition(int n, int arr[]) {
	int max = maxItemValue(n, arr);
	int size = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == max)
		{
			size++;
		}
	}
	return size;
}

int *indexOfMaxItems(int n, int arr[], int size)
{
	int max = maxItemValue(n, arr);
	int *list = (int *)malloc(size);
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == max)
		{
			list[count] = i;
			count++;
		}
	}
	return list;
}

const char TITLE[] = "Input an array int. Return index of max items\n";
void runEx()
{
	// Array = [-9, 28, -19, 28, 2, 4] -> 1 3
	printf("%sArray = [-9, 28, -19, 28, 2, 4] -> 1 3\n", TITLE);

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
	int *list = indexOfMaxItems(n, arr, size);
	printf("\nIndex of max items: ");
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