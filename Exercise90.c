#include <stdio.h>
#include <math.h>

int findNumber(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; ++i)
	{
		sum += i;
		if (sum >= n)
			return i - 1;
	}
	return sum;
}

const char TITLE[] = "Find greatest m that is less than ";
void runEx()
{
	printf("%sS(m) = 1 + 2 + ... + m < n \n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	printf("S(m) < %d, m = %d \n", n, findNumber(n));
};

int main(void)
{
	runEx();
	return 0;
}