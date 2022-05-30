#include <stdio.h>
#include <math.h>

double findHighestTotal(int number)
{
	double sum = 0;
	for (int i = 0; i < number; ++i)
	{
		if (sum >= number)
		{
			return i - 1;
		}
		sum = sum + i;
	}
	return sum;
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