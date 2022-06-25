#include <stdio.h>
#include <math.h>

void findCountOfEvenDivisorOfNumber(int n)
{
	printf("Even divisor of %d is: ", n);
	int count = 0;
	for (int i = n; i > 0; --i)
	{
		if (n % i == 0 && i % 2 == 0)
		{
			printf("%d ", i);
			count += 1;
		}
	};
	printf("\nCount of even divisor of %d is: %d", n, count);
	printf("\n");
}

const char TITLE[] = "Find count of even divisor of a number \n";
void runEx()
{
	printf("%sDivisor of 18 is 2, 6, 18 \n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	findCountOfEvenDivisorOfNumber(n);
};

int main(void)
{
	runEx();
	return 0;
}