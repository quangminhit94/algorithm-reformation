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

int *evenNumbersBelongToDistance(int n, int arr[], int min, int max)
{
	int temp = min;
	if (min > max)
	{
		temp = max;
		max = min;
		min = temp;
	}
	// remove number not belong to distance
	for (int i = 0; i < n; i++)
	{
		if ((arr[i] < min || arr[i] > max) && (arr[i] % 2 != 0))
		{
			arr[i] = 0;
		}
	}
	return arr;
}

const char TITLE[] = "Input an array int, distance (x, y). Return even numbers belong to (x, y)\n";
void runEx()
{
	// Array = [8, -19, -29] and (x,y) = (1, 10) -> 8
	printf("%sArray = [8, -19, -29] and (x,y) = (1, 10) -> 8\n", TITLE);

	unsigned int x;
	printf("\nPlease enter an integer value of x: ");
	scanf("%d", &x);
	if(x < 0)
	{
		printf("\nError: x must be greater than 0\n");
		return;
	}
	unsigned int y;
	printf("\nPlease enter an integer value of y: ");
	scanf("%d", &y);
	if(y < 0)
	{
		printf("\nError: y must be greater than 0\n");
		return;
	}

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

	printf("Distance (x, y) = (%d, %d)\n", x, y);
	printArrayInt(n, arr);
	int *number = evenNumbersBelongToDistance(n, arr, x, y);
	printf("Numbers belong to (%d, %d): ", x, y);
	for (int i = 0; i < n; i++)
	{
		if (number[i] != 0)
		{
			printf("%d ", number[i]);
		}
	}
	printf("\n");
}

int main(void)
{
	runEx();
	return 0;
}