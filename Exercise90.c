#include <stdio.h>
#include <math.h>

// n = 4
// i = 1 -> sum = 1 < 4 -> true
// i = 2 -> sum = 3 < 4 -> true
// i = 3 -> sum = 6 > 4 -> false -> return i = 2
int calculateM(int n)
{
	double sum = 0;
	int m;
	for (int i = 1; i <= n; ++i)
	{
		sum += i;
		if (sum >= n)
		{
			m = i - 1;
			break;
		}
	}
	return m;
}

const char TITLE[] = "Find greatest m that is less than n";
void runEx()
{
	printf("%sS(m) = 1 + 2 + ... + m < n \n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	printf("S(m) < %d, m = %d \n", n, calculateM(n));
};

int main(void)
{
	runEx();
	return 0;
}