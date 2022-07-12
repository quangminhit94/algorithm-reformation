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
int firstPositiveNumberOfArrayInt(int n, int arr[])
{
	int firstPositiveNumber = -1;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
		{
			return arr[i];
		}
	}
	return firstPositiveNumber;
}

const char TITLE[] = "Input array and print first positive number, if no return -1\n";
void runEx()
{
	printf("%s[-6,19,2,7] -> 19\n", TITLE);
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
	int result = firstPositiveNumberOfArrayInt(n, arr);
	if(result > 0) {
		printf("First positive number is: %d\n", result);
	} else {
		printf("No positive number\n");
	}
};

int main(void)
{
	runEx();
	return 0;
}