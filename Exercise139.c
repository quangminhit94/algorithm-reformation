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
int isPerfectNumber(int n)
{
	int sum = 0;
	for (int i = n - 1; i > 0; i--)
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

int indexOfFinalPerfectNumberOfArrayInt(int n, int arr[])
{
	int index = -1;
	for (int i = n - 1; i >= 0; i--)
	{
		if (isPerfectNumber(arr[i]))
		{
			return i;
		}	
	}
	return index;
}

const char TITLE[] = "Input array and print index of final perfect number, if no return -1\n";
void runEx()
{
	printf("%s[-6,19,2,7] -> 0\n", TITLE);
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
	int result = indexOfFinalPerfectNumberOfArrayInt(n, arr);
	if(result == -1)
	{
		printf("No perfect number\n");
	}
	else
	{
		printf("Index of final perfect number: %d\n", result);
	}
};

int main(void)
{
	runEx();
	return 0;
}