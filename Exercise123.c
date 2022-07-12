#include <stdio.h>
#include <math.h>
void printIndexOfMinNumber(int n, int arr[]) {
	int min = arr[0];
	int index = 0;
	for (int i = 1; i < n; i++) {
		if(arr[i] < min) {
			min = arr[i];
			index = i;
		}
	}
	printf("Index of min number in array is: %d\n", index);
}

const char TITLE[] = "Find index of min number in an array int\n";
void runEx()
{
	printf("%s[4,19,2,7] -> 2\n", TITLE);
	unsigned int n;
	printf("\nPlease enter an integer value of n (array size): ");
	scanf("%d", &n);
	if (n < 1) {
		printf("\nError: n must be greater than 0\n");
		return;
	}

	int arr[n];
	for (int i = 0; i < n; i++) {
		printf("\nPlease enter an integer value of item: ");
		scanf("%d", &arr[i]);
	}

	printf("Your array: ");
	int min = arr[0];
	int index = 0;
	for (int i = 1; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	printIndexOfMinNumber(n, arr);
};

int main(void)
{
	runEx();
	return 0;
}