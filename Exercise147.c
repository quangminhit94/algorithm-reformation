#include <stdio.h>
#include <math.h>

void printArrayIntPositive(int n, int arr[])
{
	printf("Your array: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int isPositive(int n){
	if(n >= 0){
		return 1;
	}
	return 0;
}

int lastPositiveNumberOfArrayInt(int n, int arr[])
{
	int lastPositiveNumber = -1;
	for (int i = n - 1; i >= 0; i--)
	{
		if (isPositive(arr[i]))
		{
			return arr[i];
		}
	}
	
	return lastPositiveNumber;
}

const char TITLE[] = "Find last positive number of an array int\n";
void runEx()
{
	printf("%sif array has no positive number return -1\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	// input positive array
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		printf("\nPlease enter an integer value of item: ");
		scanf("%d", &arr[i]);
	}

	printArrayIntPositive(n, arr);

	int result = lastPositiveNumberOfArrayInt(n, arr);

	if(result == -1)
	{
		printf("No positive number\n");
	}
	else
	{
		printf("Last positive number: %d\n", result);
	}
}

int main(void)
{
	runEx();
	return 0;
}