#include <stdio.h>
#include <math.h>

void findProductOfOddDivisorOfNumber(int n)
{
	printf("Odd divisor of %d is: ", n);
	int product = 1;
	for (int i = n; i > 0; --i)
	{
		if (n % i == 0 && i % 2 != 0)
		{
			printf("%d ", i);
			product *= i;
		}
	};
	printf("\nProduct of odd divisor of %d is: %d", n, product);
	printf("\n");
}

const char TITLE[] = "Find product of odd divisor of a number \n";
void runEx()
{
	printf("%sOdd divisor of 18 is 1, 3, 9 \n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	findProductOfOddDivisorOfNumber(n);
};

int main(void)
{
	runEx();
	return 0;
}