#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void printArrayInt(int n, int arr[])
{
	printf("Your array: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void printCoupleItems(int n, int arr[])
{
	// Array = [9, 19, 29] -> (9, 19); (19, 29); (9, 29)
	printf("couple items (a,b) match a <= b: \n");
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if(arr[i] <= arr[j])
			{
				printf("(%d, %d)\n", arr[i], arr[j]);
			}
			else {
				printf("(%d, %d)\n", arr[j], arr[i]);
			}
		}
	}
}

const char TITLE[] = "Input an array int, length > 2, couple items are different. Return couple items (a,b) match a <= b\n";
void runEx()
{
	// Array = [9, 19, 29] -> (9, 19); (19, 29); (9, 29)
	printf("%sArray = [9, 19, 29] -> (9, 19); (19, 29); (9, 29)\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of array size n: ");
	scanf("%d", &n);
	if(n <= 2) {
		printf("\nError: n must be greater than 2.\n");
		return;
	}

	// input real number array
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		printf("\nPlease enter an integer value of item: ");
		scanf("%d", &arr[i]);
	}

	printArrayInt(n, arr);
	printCoupleItems(n, arr);
}

int main(void)
{
	runEx();
	return 0;
}