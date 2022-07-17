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

int *listItemLessThanNextItemAndMoreThanPreItem(int n, int *arr) {
	// return a list of item is less than abs of next item and more than previous item
	int *list = (int *)malloc(n);
	int count = 0;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < abs(arr[i + 1]) && arr[i] > arr[i - 1])
		{
			list[count] = arr[i];
			count++;
		}
	}
	return list;
}

const char TITLE[] = "Input an array int. Return items is less than abs of next item and more than previous item\n";
void runEx()
{
	// Array = [-9, 29, -19] -> 29 > abs(-19) -> 29
	printf("%sArray = [-9, 29, -19] -> 29 > abs(-19) -> 29\n", TITLE);

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
	// Return items is less than abs of next item and more than previous item
	int *list = listItemLessThanNextItemAndMoreThanPreItem(n, arr);
	printf("items is less than abs of next item and more than previous item\n");
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