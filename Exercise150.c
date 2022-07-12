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
int largestNegative(int n, int arr[]){
	int largestNegative = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < 0 && arr[i] < largestNegative)
		{
			largestNegative = arr[i];
		}
	}
	return largestNegative;
}

const char TITLE[] = "Find largest negative number of an array int\n";
void runEx()
{
	printf("%sif array has no negative number return 0\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	// input real number array
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		printf("\nPlease enter an integer value of item: ");
		scanf("%d", &arr[i]);
	}

	printArrayIntPositive(n, arr);

	int largest = largestNegative(n, arr);

	if(largest)
	{
		printf("Largest negative number: %d\n", largest);
	}
	else
	{
		printf("No negative number\n");
	}
}

int main(void)
{
	runEx();
	return 0;
}