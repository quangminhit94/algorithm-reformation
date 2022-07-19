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

int distance(int a, int b)
{
	// Array = [24, 45, -2]
	// a = 24, b = 45 -> distance = abs(24-45) = 9
	// a = 24, b = -2 -> distance = abs(24+2) = 26
	// a = 45, b = -2 -> distance = abs(45+2) = 47
	return abs(a - b);
}

int minDistance(int n, int arr[]) {
	int min = abs(arr[0] - arr[1]);
	for (int i = 1; i < n - 1; i++)
	{
		if (distance(arr[i], arr[i + 1]) < min)
		{
			min = arr[i];
		}
	}
	return min;
}

void printPairItemsMinDistance(int n, int arr[])
{
	int min = minDistance(n, arr);
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (distance(arr[i], arr[j]) == min)
			{
				printf("(%d, %d)\n", arr[i], arr[j]);
			}
		}
	}
}

const char TITLE[] = "Input an array positive int. Return pair items have min distance\n";
void runEx()
{
	// Array = [24, 45, -2] -> (24, 45)
	printf("%sArray = [24, 45, -2] -> (24, 45)\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of array size n: ");
	scanf("%d", &n);
	// input at least 3 items
	if (n < 3)
	{
		printf("\nPlease enter at least 3 items\n");
		return;
	}

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

	printf("\nPair items have min distance: ");
	printPairItemsMinDistance(n, arr);
	printf("\n");
}

int main(void)
{
	runEx();
	return 0;
}