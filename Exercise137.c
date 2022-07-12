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
int indexOfMinNumberOfArrayInt(int n, int arr[])
{
	int min = arr[0];
	int index = -1;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			index = i;
		}
	}
	return index;
}

const char TITLE[] = "Input array and print index of min number, if no return -1\n";
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
	int result = indexOfMinNumberOfArrayInt(n, arr);
	if(result == -1)
	{
		printf("No min number\n");
	}
	else
	{
		printf("Index of min number: %d\n", result);
	}
};

int main(void)
{
	runEx();
	return 0;
}