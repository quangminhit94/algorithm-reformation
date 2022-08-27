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

int countOfNumber(int n, int arr[])
{
	int count = 0;
	const int five = 5;
	for (int i = 0; i < n; i++)
	{
		if(arr[i] % 10 == five) {
			count++;
		}
	}
	return count;
}

const char TITLE[] = "Input an array int. Count item that has final digit 5 in array\n";
void runEx()
{
	// Array = [5, 2, -27, -9, 2] -> x = 2, count = 2
	printf("%sArray = [5, 2, -27, -9, 2] -> x = 2, count = 2\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of array size n: ");
	scanf("%d", &n);

	// input real number array
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		printf("\nPlease enter an integer value of item arr[%d]: ", i);
		scanf("%d", &arr[i]);
		if(arr[i] < 0)
		{
			printf("\nIndex %d, Please enter a positive number\n", i);
			i--;
		}
	}

	printArrayInt(n, arr);

	int count = countOfNumber(n, arr);
	printf("\nCount item that has final digit 5 in array: %d", count);
	printf("\n");
}

int main(void)
{
	runEx();
	return 0;
}