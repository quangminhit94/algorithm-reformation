#include <stdio.h>
#include <math.h>

void printArrayInt(int n, int arr[])
{
	printf("Your array: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int isNegative(int n, int arr[]){
	for (int i = 0; i < n; i++)
	{
		if(arr[i] < 0){
			return 1;
		}
	}
	return -1;
}
// if array has no negative return -1 else return max negative number
int largestNegative(int n, int arr[]){
	int max = arr[0];
	for (int i = 1; i < n; i++) {
		if(arr[i] < 0 && arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}

const char TITLE[] = "Find largest negative number of an array int\n";
void runEx()
{
	printf("%sif array has no negative number return 0\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	// input real number array
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		printf("\nPlease enter an integer value of item: ");
		scanf("%d", &arr[i]);
	}

	printArrayInt(n, arr);
	int isNegativeArray = isNegative(n, arr);
	if(isNegativeArray == -1){
		printf("No negative number\n");
	}
	else{
		printf("Largest negative number: %d\n", largestNegative(n, arr));
	}
}

int main(void)
{
	runEx();
	return 0;
}