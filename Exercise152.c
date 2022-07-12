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
int largestPerfectNumber(int n, int arr[]){
	int largestPerfectNumber = 0;
	for (int i = 0; i < n; i++)
	{
		if (isPerfect(arr[i]) && arr[i] > largestPerfectNumber)
		{
			largestPerfectNumber = arr[i];
		}
	}
	return largestPerfectNumber;
}

const char TITLE[] = "Find largest perfect number of an array int\n";
void runEx()
{
	printf("%sif array has no perfect number return 0\n", TITLE);

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

	int largest = largestPerfectNumber(n, arr);

	if(largest)
	{
		printf("Largest perfect number: %d\n", largest);
	}
	else
	{
		printf("No perfect number\n");
	}
}

int main(void)
{
	runEx();
	return 0;
}