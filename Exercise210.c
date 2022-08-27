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

int isFirstDigitEven(int n)
{
	int firstDigit = 0;
	for (int i = n; i > 0; i /= 10)
	{
		firstDigit = i % 10;
	}
	if (firstDigit % 2 == 0)
	{
		return 1;
	}
	return 0;
}

int sumOfItems(int n, int arr[])
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if(isFirstDigitEven(arr[i])) {
			sum += arr[i];
		}
	}
	return sum;
}

const char TITLE[] = "Input an array int. Sum of items have first digit even\n";
void runEx()
{
	// Array = [5, 27, 9, 2] -> 27 + 2 = 29
	printf("%sArray = [5, 27, 9, 2] -> 27 + 2 = 29\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of array size n: ");
	scanf("%d", &n);

	// input positive number array
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

	int sum = sumOfItems(n, arr);
	printf("\nSum of items in array: %d", sum);
	printf("\n");
}

int main(void)
{
	runEx();
	return 0;
}