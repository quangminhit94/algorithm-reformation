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

void printMinDistanceCoupleItems(int n, int arr[])
{
	// Array = [9, 19, 29] -> abs(9 - 19) = 10; abs(19 - 29) = 10; abs(9 - 29) = 20 -> (9, 19); (19, 29);
	int distance = 0;
	int minDistance = abs(arr[0] - arr[1]);
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			distance = abs(arr[i] - arr[j]);
			if(distance < minDistance)
			{
				minDistance = distance;
			}
		}
	}
	printf("couple items (a,b) match min distance: \n");
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			distance = abs(arr[i] - arr[j]);
			if(distance == minDistance)
			{
				printf("(%d, %d)\n", arr[i], arr[j]);
			}
		}
	}
}

const char TITLE[] = "Input an array int, length > 2, couple items are different. Return couple items (a,b) match min distance\n";
void runEx()
{
	// Array = [9, 19, 29] -> (9, 19); (19, 29);
	printf("%sArray = [9, 19, 29] -> (9, 19); (19, 29)\n", TITLE);

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
	printMinDistanceCoupleItems(n, arr);
}

int main(void)
{
	runEx();
	return 0;
}