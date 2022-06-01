#include <stdio.h>
#include <math.h>

int findNumber(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; ++i)
	{
		if (i % 2 != 0)
			sum += i;
		if (sum >= n)
			return sum - i;
	}
	return sum;
}

const char TITLE[] = "Find sum of odd number that is less than n of \n";
void runEx()
{
	printf("%sFind S(x) = 1 + 3 + ... + x < n \n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	printf("S = %d \n", findNumber(n));
};

int main(void)
{
	runEx();
	return 0;
}