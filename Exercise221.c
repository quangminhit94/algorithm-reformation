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

int countOfDigits(int n, int arr[])
{
	int even = 0;
	int odd = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = arr[i]; j > 0; j /= 10)
		{
			int digit = j % 10;
			if (digit % 2 == 1)
			{
				odd++;
			}
			else
			{
				even++;
			}
		}
	}
	printf("Even digits: %d\n", even);
	printf("Odd digits: %d\n", odd);
	if (even > odd)
		return -1;
	else if (odd > even)
		return 1;
	return 0;
}

const char TITLE[] = "Input an array int. Digits of even and odd in array\n";
void runEx()
{
	// Array = [5, 2, -27, -9, 2] -> Odd number = even number
	printf("%sArray = [5, 2, -27, -9, 2] -> Odd number = even number\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of array size n: ");
	scanf("%d", &n);

	// input real number array
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		printf("\nPlease enter an integer value of item arr[%d]: ", i);
		scanf("%d", &arr[i]);
		if (arr[i] < 0)
		{
			printf("\nIndex %d, Please enter a positive number\n", i);
			i--;
		}
	}

	printArrayInt(n, arr);

	int count = countOfDigits(n, arr);
	if (count == -1)
		printf("Even digits > odd digits");
	if (count == 1)
		printf("Odd digits > even digits");
	if (count == 0)
		printf("Odd digits = even digits");
	printf("\n");
}

int main(void)
{
	runEx();
	return 0;
}