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

int isMoreThanNumber(int a, int b) {
	if(a > b) return 1;
	return 0;
}

int isLessThanNumber(int a, int b) {
	if(a < b) return 1;
	return 0;
}

int sumOfItems(int n, int arr[])
{
	int sum = 0;
	for (int i = 1; i < n - 1; i++)
	{
		if (isMoreThanNumber(arr[i], arr[i - 1]) && isMoreThanNumber(arr[i], arr[i + 1]))
		{
			sum += arr[i];
		}
		else if(isLessThanNumber(arr[i], arr[i - 1]) && isLessThanNumber(arr[i], arr[i + 1])) {
			sum += arr[i];
		}
	}
	return sum;
}

const char TITLE[] = "Input an array int. Sum of items, item is more than or less than adjacent items\n";
void runEx()
{
	// Array = [5, 7, 9, 2, 6] -> 9 + 2 = 11
	printf("%sArray = [5, 7, 9, 2, 6] -> 9 + 2 = 11\n", TITLE);

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