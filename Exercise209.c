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

int sumOfItems(int n, int arr[])
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if(isSymmetrical(arr[i])) {
			sum += arr[i];
		}
	}
	return sum;
}

const char TITLE[] = "Input an array int. Sum of symmetrical items\n";
void runEx()
{
	// Array = [121, 10, 21, 2] -> 121+2
	printf("%sArray = [121, 10, 21, 2] -> 121+2\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of array size n: ");
	scanf("%d", &n);

	// input positive number array
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		printf("\nPlease enter an integer value of item arr[%d]: ", i);
		scanf("%d", &arr[i]);
		if(arr[i] < 0)
		{
			printf("\nIndex %d, Please enter a positive number\n", i);
			i--;
		}
	}

	printArrayInt(n, arr);

	int sum = sumOfItems(n, arr);
	printf("\nSum of items in array: %d", sum);
	printf("\n");
}

int main(void)
{
	runEx();
	return 0;
}