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

int isMoreThan2003(int n) {
	return n > 2003;
}

int firstItemMoreThan2003ArrayInt(int n, int arr[]) {
	for (int i = 0; i < n; i++) {
		if (isMoreThan2003(arr[i])) {
			return arr[i];
		}
	}
	return -1;
}

const char TITLE[] = "Input array and return first item > 2003 else return -1\n";
void runEx()
{
	printf("%sArray = [24, 2006, 9999, 13, 43, -12] -> 2006\n", TITLE);

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
	int firstItemMoreThan2003 = firstItemMoreThan2003ArrayInt(n, arr);
	if (firstItemMoreThan2003 == 0) {
		printf("0 No item > 2003\n");
	} else {
		printf("First item > 2003: %d\n", firstItemMoreThan2003);
	}
}

int main(void)
{
	runEx();
	return 0;
}