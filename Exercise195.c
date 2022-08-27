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

int isMatchCondition(int a, int b, int c)
{
	// Array = [24, 45, 1, 2, 3]
	return a == b + c;
}


void printTripleItemsMatchCondition(int n, int arr[])
{
	for (int i = 0; i < n - 2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				if (isMatchCondition(arr[i], arr[j], arr[k]))
				{
					printf("(%d, %d, %d)\n", arr[i], arr[j], arr[k]);
				}
				else if (isMatchCondition(arr[i], arr[k], arr[j]))
				{
					printf("(%d, %d, %d)\n", arr[i], arr[k], arr[j]);
				}
				else if (isMatchCondition(arr[j], arr[i], arr[k]))
				{
					printf("(%d, %d, %d)\n", arr[j], arr[i], arr[k]);
				}
				else if (isMatchCondition(arr[j], arr[k], arr[i]))
				{
					printf("(%d, %d, %d)\n", arr[j], arr[k], arr[i]);
				}
				else if (isMatchCondition(arr[k], arr[i], arr[j]))
				{
					printf("(%d, %d, %d)\n", arr[k], arr[i], arr[j]);
				}
				else if (isMatchCondition(arr[k], arr[j], arr[i]))
				{
					printf("(%d, %d, %d)\n", arr[k], arr[j], arr[i]);
				}
			}
		}
	}
}

const char TITLE[] = "Input an array int, more than 3 items. Return triple items (a,b,c) match condition a = b + c\n";
void runEx()
{
	// Array = [24, 45, 1, 2, 3] -> (1, 2, 3)
	printf("%sArray = [24, 45, 1, 2, 3] -> (1, 2, 3)\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of array size n: ");
	scanf("%d", &n);
	// input at least 4 items
	if (n < 4)
	{
		printf("\nPlease enter at least 4 items\n");
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

	printf("\nTriple items (a,b,c) match condition a = b + c:\n");
	printTripleItemsMatchCondition(n, arr);
	printf("\n");
}

int main(void)
{
	runEx();
	return 0;
}