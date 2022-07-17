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

int *listItemMoreThanNextItem(int n, int *arr) {
	// return a list of item is more than abs of next item
	int *list = (int *)malloc(n);
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > abs(arr[i + 1]))
		{
			list[count] = arr[i];
			count++;
		}
	}
	return list;
}

const char TITLE[] = "Input an array int. Return items is more than abs of next item\n";
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

	int *result = listItemMoreThanNextItem(n, arr);
	// print result
	printf("item is more than abs of next item\n");
	for (int i = 0; i < n; i++)
	{
		if (result[i] != 0)
		{
			printf("%d\n", result[i]);
		}
	}
}

int main(void)
{
	runEx();
	return 0;
}