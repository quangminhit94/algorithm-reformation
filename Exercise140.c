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
int minPositiveNumberOfArrayInt(int n, int arr[])
{
	int min = -1;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
		{
			return arr[i];
		}
	}
	
	return min;
}

const char TITLE[] = "Input array and print min positive number, if no return -1\n";
void runEx()
{
	printf("%s[-6,19,2,7] -> 2\n", TITLE);
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
	int result = minPositiveNumberOfArrayInt(n, arr);
	if(result == -1)
	{
		printf("No min positive number\n");
	}
	else
	{
		printf("min positive number: %d\n", result);
	}
};

int main(void)
{
	runEx();
	return 0;
}