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

int isNumberHasPowerOfTwo(int n) {
	// is number has type 2^k
	for (int i = 1; i <= n; ++i)
	{
		if (pow(2, i) == n)
		{
			return 1;
		}
	}
	return 0;
}

int indexOfFirstItemHasTypeTwoPower(int n, int arr[]) {
	// find the first item in array has type 2^k
	for (int i = 0; i < n; i++)
	{
		if (isNumberHasPowerOfTwo(arr[i]))
		{
			return i;
		}
	}
	return -1;
}

const char TITLE[] = "Input an array int positive then return first item has 2^k type, else return 0\n";
void runEx()
{
	printf("%sArray = [12, 242, 2, 8] -> 2 = 2^1 \n", TITLE);

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
	int index = indexOfFirstItemHasTypeTwoPower(n, arr);
	if (index == -1) {
		printf("\nNo item has type 2^k\n");
	} else {
		printf("\nFirst item has type 2^k: %d\n", arr[index]);
	}
	
}

int main(void)
{
	runEx();
	return 0;
}