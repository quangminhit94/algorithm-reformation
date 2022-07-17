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

int isNumberPrime(int n)
{
	for (int i = 2; i <= sqrt(n); ++i)
	{
		if (n % i == 0)
		{
			return 0;
		}
	};
	return 1;
}

int indexOfMaxItemPrime(int n, int arr[]) {
	int max = 0;
	int index = 0;
	// find max number in array
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			index = i;
		}
	}
	// is max item prime
	if(isNumberPrime(max)) {
		return index;
	}
	return -1;
}

const char TITLE[] = "Input an array int positive then return min prime item which is more than all item in array, else return 0\n";
void runEx()
{
	// Array = [9, 17, 3, 8, 5] -> 17 is min prime number > all item in array
	// Array = [9, 17, 3, 8, 25] -> no prime number > all item in array
	// Array = [9, 17, 3, 8, 47] -> 47 is min prime number > all item in array
	printf("%sArray = [9, 17, 3, 8, 25] -> 17 is min prime \n", TITLE);

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
	int index = indexOfMaxItemPrime(n, arr);
	if(index != -1) {
		printf("\nMin prime number is more than all item in array: %d\n", arr[index]);
	} else {
		printf("\nNo prime number is more than all item in array\n");
	}
	
}

int main(void)
{
	runEx();
	return 0;
}