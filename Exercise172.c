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

int leastCommonMultiple2Number(int a, int b)
{
	// 45, 27 -> 9 is max divisor
	int maxDivisor = 1;
	for(int i = 1; i <= a && i <= b; i++)
	{
		if(a % i == 0 && b % i == 0)
		{
			maxDivisor = i;
		}
	}
	return a * b / maxDivisor;
};

int leastCommonMultipleInArray(int n, int arr[]) {
	int min = arr[0];
	int max = arr[0];
	for (int i = 1; i < n; i++) {
		if(arr[i] < min) {
			min = arr[i];
		}
		if(arr[i] > max) {
			max = arr[i];
		}
	}
	return leastCommonMultiple2Number(min, max);
}

const char TITLE[] = "Input an array int positive then return least common multiple of all item\n";
void runEx()
{
	// Array = [9, 17, 3, 8, 25] -> 1 is max divisor -> 45 is least common multiple
	// Array = [9, 45, 36, 27, 3] -> 3 is max divisor -> 27 is least common multiple
	printf("%sArray = [9, 17, 3, 8, 25] -> lcm = min * max / maxDivisor; \n", TITLE);

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
	
	int lcm = leastCommonMultipleInArray(n, arr);
	printf("\nLeast common multiple of all item is %d\n", lcm);

	
}

int main(void)
{
	runEx();
	return 0;
}