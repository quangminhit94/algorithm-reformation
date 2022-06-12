#include <stdio.h>
#include <math.h>

void findSumOfDivisorOfNumberNotIncludeNumber(int n)
{
	printf("Divisor of %d but not include n is: ", n);
	int sum = 0;
	for (int i = n - 1; i > 0; --i)
	{
		if (n % i == 0)
		{
			printf("%d ", i);
			sum += i;
		}
	};
	printf("\nSum of divisor of %d but not include n is: %d", n, sum);
	printf("\n");
}

const char TITLE[] = "Find sum of divisor of a number but not include number \n";
void runEx()
{
	printf("%sDivisor of 18 not include 18 is 1, 2, 3, 6, 9 \n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	findSumOfDivisorOfNumberNotIncludeNumber(n);
};

int main(void)
{
	runEx();
	return 0;
}