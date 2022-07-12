#include <stdio.h>
#include <math.h>

void inputArrayInt(int n, int arr[])
{
	for (int i = 0; i < n; i++)
	{
		printf("\nPlease enter an integer value of item: ");
		scanf("%d", &arr[i]);
	}
}
void printArrayInt(int n, int arr[])
{
	printf("Your array: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void printIndexOfNegativeNumberOfArrayInt(int n, int arr[])
{
	printf("Index of negative numbers: ");
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}

const char TITLE[] = "Input array and print negative number\n";
void runEx()
{
	printf("%s[-6,19,2,7] -> -6\n", TITLE);
	unsigned int n;
	printf("\nPlease enter an integer value of n (array size): ");
	scanf("%d", &n);
	if (n < 1) {
		printf("\nError: n must be greater than 0\n");
		return;
	}

	int arr[n];
	inputArrayInt(n, arr);
	printArrayInt(n, arr);
	printIndexOfNegativeNumberOfArrayInt(n, arr);
};

int main(void)
{
	runEx();
	return 0;
}