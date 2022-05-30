#include <stdio.h>
#include <math.h>

int productDigitOfNumber(int number)
{
	int digit = 1;
	for (int i = number; i > 0; i /= 10)
	{
		digit *= number % 10;
		number = number / 10;
	}
	return digit;
}

const char TITLE[] = "Product digits of the number \n";
void runEx()
{
	printf("%s1 digits: 0-9, 2 digits: 10-99, 3 digits: 100-999\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	printf("n = %d, T(n) = %d \n", n, productDigitOfNumber(n));
};

int main(void)
{
	runEx();
	return 0;
}