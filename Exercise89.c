#include <stdio.h>
#include <math.h>

// n = 3
// i = 1 -> sum = 1 < n -> true
// i = 3 -> sum = 4 > n -> false
int sum(int n)
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

const char TITLE[] = "Find sum of odd number that is less than n\n";
void runEx()
{
	printf("%sFind S(x) = 1 + 3 + ... + x < n \n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	printf("S = %d \n", sum(n));
};

int main(void)
{
	runEx();
	return 0;
}