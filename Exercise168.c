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

int isNumberHasTypePowerOf5(int n) {
	// is number has type 5^k
	for (int i = 1; i <= n; i++)
	{
		if (pow(5, i) == n)
		{
			return 1;
		}
	}
	return 0;
}

int indexOfMaxItemHasTypePowerOf5(int n, int arr[]) {
	// find max item which has type 5^k
	int max = 0;
	int index = -1;
	for (int i = 0; i < n; i++)
	{
		if (isNumberHasTypePowerOf5(arr[i]))
		{
			if (arr[i] > max)
			{
				max = arr[i];
				index = i;
			}
		}
	}
	return index;
}

const char TITLE[] = "Input an array int positive then return max item which has type 5^k, else return 0\n";
void runEx()
{
	printf("%sArray = [3, 25, 125, 625] -> 625 = 5^4 \n", TITLE);

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
	int index = indexOfMaxItemHasTypePowerOf5(n, arr);
	if (index == -1)
	{
		printf("\nNo item has type 5^k\n");
	}
	else
	{
		printf("\nMax item which has type 5^k: %d\n", arr[index]);
	}
	
}

int main(void)
{
	runEx();
	return 0;
}