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

int isEvenNumber(int n)
{
	if(n % 2 == 0) 
		return 1;
	return 0;
}

int countOfNumber(int n, int arr[])
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if(isEvenNumber(arr[i])) {
			count++;
		}
	}
	return count;
}

const char TITLE[] = "Input an array int. Count even items of items\n";
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
	printf("\nCount of even items in array: %d", count);
	printf("\n");
}

int main(void)
{
	runEx();
	return 0;
}