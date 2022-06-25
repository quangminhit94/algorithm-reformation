#include <stdio.h>
#include <math.h>

int totalEvenDigitOfNumber(int number)
{
	int digit = 0, sum = 0;
	for (int i = number; i > 0; i /= 10)
	{
		digit = i % 10;
		if (digit % 2 == 0)
			sum += digit;
	}
	return sum;
}

const char TITLE[] = "Total of even digits of the number \n";
void runEx()
{
	printf("%s1 digits: 0-9, 2 digits: 10-99, 3 digits: 100-999\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	printf("n = %d, S(n) = %d \n", n, totalEvenDigitOfNumber(n));
};

int main(void)
{
	runEx();
	return 0;
}