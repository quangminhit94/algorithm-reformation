#include <stdio.h>
#include <math.h>
int isEvenAndLessThan2004(int n) {
	return n % 2 == 0 && n < 2004;
}
int isItemMatchCondition(int arrSize, int arr[]) {
	for (int i = 0; i < arrSize; i++) {
		if (isEvenAndLessThan2004(arr[i])) {
			return 1;
		}
	}
	return 0;
}

const char TITLE[] = "Check an item of array int has even and < 2004\n";
void runEx()
{
	printf("%s[4,19,2,7] -> yes\n", TITLE);
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

	printf("You input: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	int isEven = isItemMatchCondition(n, arr);
	if(isEven == 0) 
		printf("No item in array int is even and < 2004\n");
};

int main(void)
{
	runEx();
	return 0;
}