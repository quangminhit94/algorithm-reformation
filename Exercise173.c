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

int *countEveryDigitInArray(int n, int arr[]) {
	// count every digit in array
	int *count = (int *) malloc(10);
	int digit = 0;
	for (int i = 0; i < n; i++) {
		for (int j = arr[i]; j > 0; j /= 10)
		{
			digit = j % 10;
			count[digit]++;
		}
	}
	return count;
}

const char TITLE[] = "Input an array int positive then return least appearing digit of numbers\n";
void runEx()
{
	// Array = [9, 19, 29, 299, 399] -> 1,3 is least appearing digit of numbers
	// Array = [9, 2, 3, 1, 9] -> 1,2,3 is least appearing digit of numbers
	printf("%sArray = [9, 19, 29, 299, 399] -> 1 is least appearing digit of numbers \n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of array size n: ");
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
	
	int *count = countEveryDigitInArray(n, arr);
	printf("least appearing digit of numbers: ");
	for (int i = 0; i < 10; i++)
	{
		if (count[i] == 1)
			printf("%d ", i);
	}
	printf("\n");
}

int main(void)
{
	runEx();
	return 0;
}