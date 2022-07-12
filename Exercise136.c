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
int finalEvenNumberOfArrayInt(int n, int arr[])
{
	int final = -1;
	for (int i = n - 1; i >= 0; i--)
	{
		if (arr[i] % 2 == 0)
		{
			return arr[i];
		}
	}
	return final;
}

const char TITLE[] = "Input array and print final even number, if no return -1\n";
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
	int result = finalEvenNumberOfArrayInt(n, arr);
	printf("Final even number is: %d\n", result);
};

int main(void)
{
	runEx();
	return 0;
}