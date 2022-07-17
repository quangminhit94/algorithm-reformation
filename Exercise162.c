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

int indexOfItem(int n, int arr[]) {
	int index = -1;
	for (int i = 1; i < n; i++) {
		if (arr[i] == arr[i - 1] * arr[i + 1]) {
			return i;
		}
	}
	return index;
}

const char TITLE[] = "Input array then return index which is value equal previous item product next item else return -1\n";
void runEx()
{
	printf("%sArray = [12, 24, 2, 9, -12, -1] -> 24 = 12*2 -> 2\n", TITLE);

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
	int index = indexOfItem(n, arr);
	printf("Index of array match condition equal previous item value product next item value: %d\n", index);
}

int main(void)
{
	runEx();
	return 0;
}