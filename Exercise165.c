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

int isNumberHasFirstDigitOdd(int n) {
	// get the first digit
	int firstDigit = 0;
	while (n > 0) {
		firstDigit = n % 10;
		n /= 10;
	}
	// check if the first digit is odd
	if (firstDigit % 2 == 1) {
		return 1;
	}
	return 0;
}
int indexOfFirstItemHasFirstDigitOdd(int n, int arr[]) {
	// find the first item in array has first digit odd
	for (int i = 0; i < n; i++) {
		if (isNumberHasFirstDigitOdd(arr[i])) {
			return i;
		}
	}
	return -1;
}

const char TITLE[] = "Find first item which has first odd digit, in an array int positive\n";
void runEx()
{
	printf("%sArray = [12, 242, 2, 9, -12, -1] -> 12\n", TITLE);

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
	int index = indexOfFirstItemHasFirstDigitOdd(n, arr);
	if (index == -1) {
		printf("\nNo item has first odd digit\n");
	} else {
		printf("\nFirst item has first odd digit: %d\n", arr[index]);
	}
}

int main(void)
{
	runEx();
	return 0;
}