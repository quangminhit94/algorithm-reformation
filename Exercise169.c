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

int isNumberEven(int n) {
	// is number even
	if (n % 2 == 0)
		return 1;
	return 0;
}

int isItemOddAndMoreThanMax(int max, int n, int arr[]) {
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 != 0 && arr[i] > max)
		{
			return 1;
		}
	}
	return 0;
}

int indexOfMaxItemEvenNumberLessThanOtherOddNumber(int n, int arr[]) {
	// find max even item which is max even < other oddNumber
	int max = 0;
	int index = -1;
	for (int i = 0; i < n; i++)
	{
		if (isNumberEven(arr[i]) && isItemOddAndMoreThanMax(max, n, arr))
		{
			max = arr[i];
			index = i;
		}
	}
	return index;
}

const char TITLE[] = "Input an array int positive then return max even item which is less than all odd item in array, else return 0\n";
void runEx()
{
	printf("%sArray = [9, 15, 2, 8, 25] -> 8 because < all another odd number\n", TITLE);

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
	int index = indexOfMaxItemEvenNumberLessThanOtherOddNumber(n, arr);
	if (index == -1)
		printf("\nNo item is max even number less than all odd number.\n");
	else
		printf("\nMax even item is less than all odd number: %d\n", arr[index]);
	
}

int main(void)
{
	runEx();
	return 0;
}