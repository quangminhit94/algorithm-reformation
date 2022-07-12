#include <stdio.h>
#include <math.h>
int isPrimeAndLessThan100(int n) {
	if (n < 2 || n >= 100) {
		return 0;
	}
	// if n = a*b and a <= b then a*a <= a*b = n
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
};
int countPrimeAndLessThan100(int n, int arr[])
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (isPrimeAndLessThan100(arr[i]))
		{
			count++;
		}
	}
	return count;
}

const char TITLE[] = "Check an item of array int has PRIME and < 100\n";
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
	for (int i = 0; i < n; i++)
	{
		printf("\nPlease enter an integer value of item: ");
		scanf("%d", &arr[i]);
	}

	printf("You input: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	int count = countPrimeAndLessThan100(n, arr);
	printf("There are %d prime number and less than 100 in array int\n", count);
};

int main(void)
{
	runEx();
	return 0;
}