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

int indexOfFirstEvenItem(int n, int arr[])
{
	int index = -1;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			return i;
		}
	}
	return index;
}

int indexOfMaxEvenItem(int n, int arr[])
{
	int index = -1;
	int max = indexOfFirstEvenItem(n, arr);
	for (int i = 0; i < n; i++)
	{
		// Array = [45, 5, 7, 9, 2]
		// arr[0] = 45 > max, arr[0] % 2 = 1 -> false -> max = 2
		// arr[1] = 5 > max, arr[1] % 2 = 1 -> false -> max = 2
		// arr[2] = 7 > max, arr[2] % 2 = 1 -> false -> max = 2
		// arr[3] = 9 > max, arr[3] % 2 = 1 -> false -> max = 2
		// arr[4] = 2 > max, arr[4] % 2 = 0 -> false -> max = 2
		if (arr[i] > max && arr[i] % 2 == 0)
		{
			max = arr[i];
			index = i;
		}
	}
	return index;
}

int *indexOfMaxEvenItems(int n, int arr[])
{
	int *list = (int *)malloc(n);
	int count = 0;
	int indexMaxEvenItem = indexOfMaxEvenItem(n, arr);
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == arr[indexMaxEvenItem])
		{
			list[count] = i;
			count++;
		}
	}
	return list;
}

const char TITLE[] = "Input an array positive int. Return index of max even items\n";
void runEx()
{
	// Array = [45, 5, 7, 9, 2] -> index: 0
	printf("%sArray = [45, 5, 7, 9, 2] -> index: 0\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of array size n: ");
	scanf("%d", &n);

	// input real number array
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

	int *list = indexOfMaxEvenItems(n, arr);
	printf("\nIndex of max even items: ");
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