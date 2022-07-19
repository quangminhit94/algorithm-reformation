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

int indexOfFistPositiveItem(int n, int arr[]) {
	int index = -1;
	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) {
			return i;
		}
	}
	return index;
}

int indexOfMinPositiveItem(int n, int arr[])
{
	// [45, 5, 7, 9, 2]
	// indexMinPositive = 0
	int indexMinPositive = indexOfFistPositiveItem(n, arr);
	for (int i = 0; i < n; i++)
	{
		// arr[0] = 45 > 0 && 45 < arr[indexMinPositive] = 45 -> false
		// arr[1] = 5 > 0 && 5 < arr[indexMinPositive] = 45 -> true -> indexMinPositive = 1
		// arr[2] = 7 > 0 && 7 < arr[indexMinPositive] = 5 -> false
		// arr[3] = 9 > 0 && 9 < arr[indexMinPositive] = 5 -> false
		// arr[4] = 2 > 0 && 2 < arr[indexMinPositive] = 5 -> true -> indexMinPositive = 4
		if (arr[i] > 0 && arr[i] < arr[indexMinPositive])
		{
			indexMinPositive = i;
		}
	}
	return indexMinPositive;
}

int *indexOfItemsEqualMinPositiveItem(int n, int arr[])
{
	int *list = (int *)malloc(n);
	int count = 0;
	int minPositive = indexOfMinPositiveItem(n, arr);
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == arr[minPositive])
		{
			list[count] = i;
			count++;
		}
	}
	return list;
}

const char TITLE[] = "Input an array int. Return index of items which equal min positive item\n";
void runEx()
{
	// Array = [-3, 2, 2, -3] -> index: 1 2
	printf("%sArray = [-3, 2, 2, -3] -> index: 1 2\n", TITLE);

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

	int *list = indexOfItemsEqualMinPositiveItem(n, arr);
	printf("\nIndex of items equal min positive item: ");
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