#include <stdio.h>
#include <math.h>

int sumNumberLessThan0(int n, int arr[])
{
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if(arr[i] < 0) {
			sum += arr[i];
		}
	}
	return sum;
}

const char TITLE[] = "Sum negative number of an array\n";
void runEx()
{
	printf("%s[-6,19,2,7] -> -6\n", TITLE);
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
	int sum = sumNumberLessThan0(n, arr);
	printf("Sum negative number of array: %d\n", sum);
};

int main(void)
{
	runEx();
	return 0;
}