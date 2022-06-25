#include <stdio.h>
#include <math.h>

// n = 3 
// S(3) = 1 + 2 + 3 = 6 > n 
// S(2) = 1 + 2 = 3 = n
// S(1) = 1 < n -> k = 1
double findHighestTotal(int n)
{
	double total = 0;
	for (int i = 1; i <= n; ++i)
	{
		// n = 4
		// i = 1 -> total = 1 < n
		// i = 2 -> total = 3 < n
		// i = 3 -> total = 6 > n -> k = 2
		if (total >= n)
		{
			return i - 1;
		}
		total = total + i;
	}
	return total;
}

const char TITLE[] = "Find k, S(k) < n \n";
void runEx()
{
	printf("%sS(k) = (1 + 2 + ... + k) < n\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	printf("S(k) < n, S(k) < %d -> k = %lf \n", n, findHighestTotal(n));
};

int main(void)
{
	runEx();
	return 0;
}