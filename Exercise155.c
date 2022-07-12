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

int itemHasMaxDistance(int x, int n, int arr[])
{
	int maxDistance = 0;
	int item = arr[0];
	printf("distance: ");
	for (int i = 0; i < n; i++)
	{
		int distance = abs(arr[i] - x);
		printf("%d ", distance);
		if (distance > maxDistance)
		{
			maxDistance = distance;
			item = arr[i];
		}
	}
	printf("\n");
	return item;
}

const char TITLE[] = "Find the item of the array that has a max distance compared to x\n";
void runEx()
{
	printf("%sArray = [24, 45, 23, 13, 43, -12], x = 15 -> distance = [9, 30, 8, 2, 28, 27] -> 45\n", TITLE);

	unsigned int x;
	printf("\nPlease enter an integer value of x: ");
	scanf("%d", &x);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	// input real number array
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		printf("\nPlease enter an integer value of item: ");
		scanf("%d", &arr[i]);
	}

	printf("x = %d\n", x);
	printArrayInt(n, arr);
	printf("Item of array that has a max distance compared to x: %d\n", itemHasMaxDistance(x, n, arr));
}

int main(void)
{
	runEx();
	return 0;
}