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
int isSymmetrical(int n) {
	// is reverse number equal n
	int reverse = 0;
	int temp = n;
	while (temp > 0) {
		reverse = reverse * 10 + temp % 10;
		temp /= 10;
	}
	return reverse == n;
}
int firstSymmetricalNumber(int n, int arr[]) {
	// find the first symmetrical number
	for (int i = 0; i < n; i++) {
		if (isSymmetrical(arr[i])) {
			return arr[i];
		}
	}
	return -1;
}

const char TITLE[] = "Find first symmetrical number in an array int positive\n";
void runEx()
{
	printf("%sArray = [12, 242, 2, 9, -12, -1] -> 242\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	// input positive number array
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		printf("\nPlease enter an integer value of item: ");
		scanf("%d", &arr[i]);
		if(arr[i] < 0) {
			printf("\nError: item %d is negative.\n", arr[i]);
			return;
		}
	}

	printArrayInt(n, arr);
	int firstSymmetrical = firstSymmetricalNumber(n, arr);
	if (firstSymmetrical == -1) {
		printf("\nNo symmetrical number in array\n");
	} else {
		printf("\nFirst symmetrical number in array: %d\n", firstSymmetrical);
	}
}

int main(void)
{
	runEx();
	return 0;
}