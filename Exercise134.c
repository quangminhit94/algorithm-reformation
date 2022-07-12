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
void printMaxNumberOfArrayInt(int n, int arr[])
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("Max number: %d\n", max);
}

const char TITLE[] = "Input array and print max number\n";
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
	printMaxNumberOfArrayInt(n, arr);
};

int main(void)
{
	runEx();
	return 0;
}