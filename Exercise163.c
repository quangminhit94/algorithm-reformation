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

int firstSquareNumber(int n, int arr[]) {
	for (int i = 0; i < n; i++) {
		if (sqrt(arr[i]) * sqrt(arr[i]) == arr[i]) {
			return arr[i];
		}
	}
	return -1;
}

const char TITLE[] = "Find first square number in an array int positive\n";
void runEx()
{
	printf("%sArray = [12, 24, 2, 9, -12, -1] -> 9 = sqrt(3)\n", TITLE);

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

	printArrayInt(n, arr);

	int firstSquare = firstSquareNumber(n, arr);
	if(firstSquare == -1) {
		printf("\nNo square number in array\n");
	} else {
		printf("\nFirst square number in array: %d\n", firstSquare);
	}
}

int main(void)
{
	runEx();
	return 0;
}