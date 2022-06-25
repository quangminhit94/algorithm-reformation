#include <stdio.h>
#include <math.h>

void findTotalOfEvenDivisorOfNumbers(int n)
{
	printf("Even divisor of %d is: ", n);
	int sum = 0;
	for (int i = n; i > 0; --i)
	{
		if (n % i == 0 && i % 2 == 0)
		{
			printf("%d ", i);
			sum += i;
		}
	};
	printf("\nSum of even divisor of %d is: %d", n, sum);
	printf("\n");
}

const char TITLE[] = "Find sum of even divisor of a number \n";
void runEx()
{
	printf("%sEven divisor of 18 is 2, 6, 18 \n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	findTotalOfEvenDivisorOfNumbers(n);
};

int main(void)
{
	runEx();
	return 0;
}