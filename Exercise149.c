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
int isPerfect(int n){
	int sum = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	if (sum == n)
	{
		return 1;
	}
	return 0;
}

int lastPerfectNumberOfArrayInt(int n, int arr[])
{
	int lastPerfectNumber = -1;
	for (int i = n - 1; i >= 0; i--)
	{
		if (isPerfect(arr[i]))
		{
			return arr[i];
		}
	}
	
	return lastPerfectNumber;
}

const char TITLE[] = "Find last perfect number of an array int\n";
void runEx()
{
	printf("%sif array has no perfect number return -1\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	// input positive array
	int arr[n];
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

	int result = lastPerfectNumberOfArrayInt(n, arr);

	if(result == -1)
	{
		printf("No perfect number\n");
	}
	else
	{
		printf("Last perfect number: %d\n", result);
	}
}

int main(void)
{
	runEx();
	return 0;
}