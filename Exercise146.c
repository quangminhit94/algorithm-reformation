#include <stdio.h>
#include <math.h>

void printArrayInt(int n, int arr[])
{
	printf("Your array: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int isNegative(int n){
	if(n < 0){
		return 1;
	}
	return 0;
}

int firstNegativeNumberOfArrayInt(int n, int arr[])
{
	int firstNegativeNumber = -1;
	for (int i = 0; i < n; i++)
	{
		if (isNegative(arr[i]))
		{
			return arr[i];
		}
	}
	
	return firstNegativeNumber;
}

const char TITLE[] = "Find first negative number of an array int\n";
void runEx()
{
	printf("%sif array has no negative number return -1\n", TITLE);

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

	printArrayInt(n, arr);

	int result = firstNegativeNumberOfArrayInt(n, arr);

	if(result == -1)
	{
		printf("No negative number\n");
	}
	else
	{
		printf("First negative number: %d\n", result);
	}
}

int main(void)
{
	runEx();
	return 0;
}