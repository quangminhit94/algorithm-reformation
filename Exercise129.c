#include <stdio.h>
#include <math.h>

void printArrayIntPositive(int n, int arr[])
{
	printf("Your array: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void inputArrayIntPositive(int n, int arr[])
{
	for (int i = 0; i < n; i++)
	{
		printf("\nPlease enter an integer value of item: ");
		scanf("%d", &arr[i]);
		if(arr[i] < 0) {
			printf("\nError: item must be positive\n");
			return;
		}
	}

	printArrayIntPositive(n, arr);
}


const char TITLE[] = "Input and print an array positive numbers\n";
void runEx()
{
	printf("%s[19,2,7] -> 19 2 7\n", TITLE);
	unsigned int n;
	printf("\nPlease enter an integer value of n (array size): ");
	scanf("%d", &n);
	if (n < 1) {
		printf("\nError: n must be greater than 0\n");
		return;
	}

	int arr[n];
	inputArrayIntPositive(n, arr);
	
};

int main(void)
{
	runEx();
	return 0;
}