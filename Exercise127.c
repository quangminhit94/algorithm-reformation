#include <stdio.h>
#include <math.h>

int *sortedArrayAsc(int n, int arr[])
{
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if(arr[i] > arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	return arr;
}

const char TITLE[] = "Sort array Ascending\n";
void runEx()
{
	printf("%s[-6,19,2,7] -> -6 2 7 19\n", TITLE);
	unsigned int n;
	printf("\nPlease enter an integer value of n (array size): ");
	scanf("%d", &n);
	if (n < 1) {
		printf("\nError: n must be greater than 0\n");
		return;
	}

	int arr[n];
	for (int i = 0; i < n; i++)
	{
		printf("\nPlease enter an integer value of item: ");
		scanf("%d", &arr[i]);
	}

	printf("Your array: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	int *sortedArr = sortedArrayAsc(n, arr);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", sortedArr[i]);
	}
	printf("\n");
};

int main(void)
{
	runEx();
	return 0;
}