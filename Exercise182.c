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

int isOppositeSign(int a, int b)
{
	if (a <= 0 && b >= 0)
	{
		return 1;
	}
	if (a > 0 && b < 0)
	{
		return 1;
	}
	return 0;
}

int *itemHasLeastAdjacentOppositeSign(int n, int arr[])
{
	int *list = (int *)malloc(n);
	int count = 0;
	for (int i = 1; i < n; i++)
	{
		if (isOppositeSign(arr[i], arr[i + 1]) || isOppositeSign(arr[i], arr[i - 1]))
		{
			list[count] = arr[i];
			count++;
		}
	}
	return list;
}

const char TITLE[] = "Input an array int. Return item has least adjacent opposite sign\n";
void runEx()
{
	// Array = [-9, 28, -19, 18, 2, 4] -> -9 28 -19 18
	printf("%sArray = [-9, 28, -19, 18, 2, 4] -> -9 28 -19 18\n", TITLE);

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

	int *list = itemHasLeastAdjacentOppositeSign(n, arr);
	printf("item has least adjacent opposite sign\n");
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