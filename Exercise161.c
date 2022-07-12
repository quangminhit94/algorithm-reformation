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

int firstItemInRange(int min, int max, int n, int arr[]) {
	for (int i = 0; i < n; i++) {
		if (arr[i] >= min && arr[i] <= max) {
			return arr[i];
		}
	}
	return min;
}

const char TITLE[] = "Input array, distance [x, y] then return first item that is in range [x, y] else return x\n";
void runEx()
{
	printf("%sArray = [24, 2006, 9999, 9, -12, -1], distance = [-2, 10] -> 9\n", TITLE);

	unsigned int x;
	printf("\nPlease enter an integer value of x: ");
	scanf("%d", &x);

	unsigned int y;
	printf("\nPlease enter an integer value of y: ");
	scanf("%d", &y);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	// input positive number array
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		printf("\nPlease enter an integer value of item: ");
		scanf("%d", &arr[i]);
		if(arr[i] < 0) {
			printf("\nError: item %d is negative.\n", arr[i]);
			return;
		}
	}

	printf("Distance: [%d, %d]\n", x, y);
	printArrayInt(n, arr);
	
	int firstItem = firstItemInRange(x, y, n, arr);
	if(firstItem == x) {
		printf("return 11 -> No item in range [%d, %d]\n", x, y);
	} else {
		printf("First item in range [%d, %d]: %d\n", x, y, firstItem);
	}
	
}

int main(void)
{
	runEx();
	return 0;
}