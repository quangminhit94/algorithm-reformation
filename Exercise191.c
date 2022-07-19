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

int isMoreThanItem(int a, int b)
{
	if (a > b)
	{
		return 1;
	}
	return 0;
}

int *itemsMoreThanAdjacent(int n, int arr[])
{
	int *list = (int *)malloc(n);
	int count = 0;
	for (int i = 1; i < n - 1; i++)
	{
		if (isMoreThanItem(arr[i], arr[i - 1]) && isMoreThanItem(arr[i], arr[i + 1]))
		{
			list[count] = arr[i];
			count++;
		}
	}

	return list;
}

const char TITLE[] = "Input an array int. Return items are more than adjacent items\n";
void runEx()
{
	// Array = [45, 5, 7, 9, 2] -> 45 9
	printf("%sArray = [45, 5, 7, 9, 2] -> 45 9\n", TITLE);

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

	int *list = itemsMoreThanAdjacent(n, arr);
	printf("\nitems are more than adjacent items: ");
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