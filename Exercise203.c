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

int isTensDigit5(int n)
{
	int five = 5;
	int tensDigit = 2;
	int count = 1;
	for (int i = n; i > 0; i /= 10, count++)
	{
		if(count == tensDigit) {
			n = i % 10;
			if(n == five) {
				return 1;
			}
		}
	}
	return 0;
}

int sumOfItems(int n, int arr[])
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (isTensDigit5(arr[i]))
		{
			sum += arr[i];
		}
	}
	return sum;
}

const char TITLE[] = "Input an array int. Sum of items in the array, the item is number has tens digit 5\n";
void runEx()
{
	// Array = [5, 7, 9, 2] -> 0
	printf("%sArray = [5, 7, 9, 2] -> 0\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of array size n: ");
	scanf("%d", &n);

	// input real number array
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		printf("\nPlease enter an integer value of item arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}

	printArrayInt(n, arr);

	int sum = sumOfItems(n, arr);
	printf("\nSum of items in array: %d", sum);
	printf("\n");
}

int main(void)
{
	runEx();
	return 0;
}