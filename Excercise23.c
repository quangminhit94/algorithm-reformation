#include <stdio.h>
#include <math.h>

void findCountDivisorOfNumber(int n)
{
	printf("Divisor of %d is: ", n);
	int count = 0;
	for (int i = n; i > 0; --i)
	{
		if (n % i == 0)
		{
			printf("%d ", i);
			count += 1;
		}
	};
	printf("\nCount of divisor number %d: %d\n", n, count);
}

const char TITLE[] = "Find count divisor numbers of a number \n";
void runEx()
{
	printf("%sDivisor of 18 is 1, 2, 3, 6, 9, 18 \n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	findCountDivisorOfNumber(n);
};

int main(void)
{
	runEx();
	return 0;
}