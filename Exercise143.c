#include <stdio.h>
#include <math.h>

int firstEvenNumberOfArrayInt(int n, int arr[]);
void printArrayIntPositive(int n, int arr[]);
void inputPositiveArrayInt(int n, int arr[]);

void inputPositiveArrayInt(int n, int arr[])
{
	for (int i = 0; i < n; i++)
	{
		printf("\nPlease enter an integer value of item: ");
		scanf("%d", &arr[i]);
		if (arr[i] < 0)
		{
			printf("\nError: item must be greater than 0\n");
			return;
		}
	}

	printArrayIntPositive(n, arr);

	int result = firstEvenNumberOfArrayInt(n, arr);
	if(result == -1)
	{
		printf("No even number\n");
	}
	else
	{
		printf("First even number: %d\n", result);
	}
}

void printArrayIntPositive(int n, int arr[])
{
	printf("Your array: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int firstEvenNumberOfArrayInt(int n, int arr[])
{
	int firstEvenNumber = -1;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			return arr[i];
		}
	}
	
	return firstEvenNumber;
}

const char TITLE[] = "Input array and print first even number, if no return -1\n";
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
	inputPositiveArrayInt(n, arr);
	
};

int main(void)
{
	runEx();
	return 0;
}