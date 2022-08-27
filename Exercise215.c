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

int distance(int a, int b)
{
	// Array = [24, 45, -2]
	// a = 24, b = 45 -> distance = abs(24-45) = 9
	// a = 24, b = -2 -> distance = abs(24+2) = 26
	// a = 45, b = -2 -> distance = abs(45+2) = 47
	return abs(a - b);
}

double averageDistanceOfItems(int n, int arr[])
{
	double sum = 0;
	int count = 0;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			sum += distance(arr[i], arr[j]);
			printf("(%d, %d)\n", arr[i], arr[j]);
			printf("(%d)\n", distance(arr[i], arr[j]));
			count++;
		}
	}
	double average = sum / count;
	printf("count (%lf, %d)\n", sum, count);
	return average;
}

const char TITLE[] = "Input an array int. Average distance of items\n";
void runEx()
{
	// Array = [5, -27, -9, 2] 
	// distance: abs(5 + 27) = 32, abs(5+9) = 14, abs(5-2)=3, abs(-27+9)= 18, abs(-27-2)=29, abs(-9-2)=11
	// distance: 32, 14, 3, 18, 29, 11
	// (32+14+3+18+29+11)/6 = xx
	printf("%sArray = [5, -27, -9, 2] -> (32+14+3+18+29+11)/6 = xx\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of array size n: ");
	scanf("%d", &n);

	// input real number array
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		printf("\nPlease enter an integer value of item arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}

	printArrayInt(n, arr);

	double average = averageDistanceOfItems(n, arr);
	printf("\nAverage distance of items in array: %lf", average);
	printf("\n");
}

int main(void)
{
	runEx();
	return 0;
}