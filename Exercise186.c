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

int indexOfFirstNegativeItem(int n, int arr[])
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < 0)
		{
			return i;
		}
	}
	return -1;
}

int *indexOfItemsEqualFirstNegativeItem(int n, int arr[])
{
	int *list = (int *)malloc(n);
	int count = 0;
	int firstNegative = indexOfFirstNegativeItem(n, arr);
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == arr[firstNegative])
		{
			list[count] = i;
			count++;
		}
	}
	return list;
}

const char TITLE[] = "Input an array int. Return index of items which equal first negative item\n";
void runEx()
{
	// Array = [2, -5, 7, -3, 45] -> index: 1 3
	printf("%sArray = [2, -5, 7, -3, 45] -> index: 1 3\n", TITLE);

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

	int *list = indexOfItemsEqualFirstNegativeItem(n, arr);
	printf("\nIndex of items equal first negative item: ");
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