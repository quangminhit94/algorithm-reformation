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

int isNumberAllOddDigit(int n) {
	// is number all odd digit
	int digit = 0;
	for (int i = n; i > 0; i /= 10)
	{
		digit = i % 10;
		if (digit % 2 == 0)
			return 0;
	}
	return digit;
}

int indexOfFirstItemIsAllOddDigit(int n, int arr[]) {
	// find first item all odd digit
	for (int i = 0; i < n; i++)
	{
		if (isNumberAllOddDigit(arr[i]))
			return i;
	}
	return -1;
}

const char TITLE[] = "Input an array int positive then return first item which is all odd digit, else return 0\n";
void runEx()
{
	printf("%sArray = [12, 135, 2, 8] -> 135 \n", TITLE);

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
	int index = indexOfFirstItemIsAllOddDigit(n, arr);
	if (index == -1)
		printf("\nNo item is all odd digit.\n");
	else
		printf("\nFirst item is all odd digit: %d\n", index);
	
}

int main(void)
{
	runEx();
	return 0;
}