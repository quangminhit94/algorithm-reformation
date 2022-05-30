#include <stdio.h>
#include <math.h>

int countOddDigitOfNumber(int number)
{
	int digit = 0, count = 0;
	for (int i = number; i > 0; i /= 10)
	{
		digit = number % 10;
		number = number / 10;
		if (digit % 2 != 0)
			count += 1;
	}
	return count;
}

const char TITLE[] = "Count of odd digits of the number \n";
void runEx()
{
	printf("%s1 digits: 0-9, 2 digits: 10-99, 3 digits: 100-999\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	printf("n = %d, count odd digit = %d \n", n, countOddDigitOfNumber(n));
};

int main(void)
{
	runEx();
	return 0;
}