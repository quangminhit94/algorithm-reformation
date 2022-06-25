#include <stdio.h>
#include <math.h>

int productOddDigitOfNumber(int number)
{
	int digit = 0, product = 1;
	for (int i = number; i > 0; i /= 10)
	{
		digit = i % 10;
		if (digit % 2 != 0)
			product *= digit;
	}
	return product;
}

const char TITLE[] = "Product of odd digits of the number \n";
void runEx()
{
	printf("%s1 digits: 0-9, 2 digits: 10-99, 3 digits: 100-999\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	printf("n = %d, T(n) = %d \n", n, productOddDigitOfNumber(n));
};

int main(void)
{
	runEx();
	return 0;
}