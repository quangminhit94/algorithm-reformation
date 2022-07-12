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
int isEven(int n){
	if(n % 2 == 0){
		return 1;
	}
	return 0;
}
int minEvenNumber(int n, int arr[]){
	int minEvenNumber = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (isEven(arr[i]) && arr[i] < minEvenNumber)
		{
			minEvenNumber = arr[i];
		}
	}
	return minEvenNumber;
}

const char TITLE[] = "Find min even number of an array int\n";
void runEx()
{
	printf("%sif array has no even number return 0\n", TITLE);

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

	int min = minEvenNumber(n, arr);

	if(min == -1){
		printf("\nNo even number in your array\n");
	}
	else
	{
		printf("min even number: %d\n", min);
	}
}

int main(void)
{
	runEx();
	return 0;
}