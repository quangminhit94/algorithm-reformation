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

int isLessThanNegative1(int n) {
	return n < -1;
}

int lastItemLessThanNegative1ArrayInt(int n, int arr[]) {
	for (int i = n - 1; i >= 0; i--) {
		if (isLessThanNegative1(arr[i])) {
			return arr[i];
		}
	}
	return 0;
}

const char TITLE[] = "Input array and return last negative number < -1 else return 0\n";
void runEx()
{
	printf("%sArray = [24, 2006, 9999, 13, -12, -1] -> -12\n", TITLE);

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

	printArrayInt(n, arr);
	int lastItemLessThanNegative1 = lastItemLessThanNegative1ArrayInt(n, arr);
	if (lastItemLessThanNegative1 == 0) {
		printf("0 No item < -1\n");
	} else {
		printf("Last item < -1: %d\n", lastItemLessThanNegative1);
	}
	
}

int main(void)
{
	runEx();
	return 0;
}