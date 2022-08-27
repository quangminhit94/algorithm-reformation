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

int isSymmetricalNumber(int n)
{
	// is reverse number equal n
	int reverse = 0;
	int temp = n;
	while (temp > 0) {
		reverse = reverse * 10 + temp % 10;
		temp /= 10;
	}
	return reverse == n;
}

int countOfNumber(int n, int arr[])
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if(isSymmetricalNumber(arr[i])) {
			count++;
		}
	}
	return count;
}

const char TITLE[] = "Input an array int. Count symmetrical item in array\n";
void runEx()
{
	// Array = [5, -27, -9, 2] -> count = 1
	printf("%sArray = [5, -27, -9, 2] -> count = 1\n", TITLE);

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

	int count = countOfNumber(n, arr);
	printf("\nCount symmetrical item in array: %d", count);
	printf("\n");
}

int main(void)
{
	runEx();
	return 0;
}