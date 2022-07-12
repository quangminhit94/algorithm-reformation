#include <stdio.h>
#include <math.h>
void printMaxNumber(int n, int arr[])
{
	int max = arr[0];
	for (int i = 1; i < n; i++) {
		if(arr[i] > max) {
			max = arr[i];
		}
	}
	printf("Max number is: %d\n", max);
}
const char TITLE[] = "Find max number in an array int\n";
void runEx()
{
	printf("%s[4,19,2,7] -> 19\n", TITLE);
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
	int max = arr[0];
	for (int i = 1; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	printMaxNumber(n, arr);
};

int main(void)
{
	runEx();
	return 0;
}