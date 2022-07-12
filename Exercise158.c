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

int max(int n, int arr[]) {
	int max = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

const char TITLE[] = "Input array and return [-max, max]\n";
void runEx()
{
	printf("%sArray = [24, 45, 23, 13, 43, -12] -> [-45, 45]\n", TITLE);

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
	int maxArray = max(n, arr);
	printf("[%d, %d]\n", -maxArray, maxArray);
}

int main(void)
{
	runEx();
	return 0;
}