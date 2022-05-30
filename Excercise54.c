#include <stdio.h>
#include <math.h>

int amountOfMinDigitOfNumber(int number)
{
	int digit = 0, minDigit = number, countMin = 0;
	for (int i = number; i > 0; i /= 10)
	{
		digit = number % 10;
		number = number / 10;

		if (digit < minDigit)
		{
			countMin = 0;
			minDigit = digit;
		}
		if (digit == minDigit)
		{
			countMin += 1;
		}
	}
	printf("Min digit of the number is: %d\n", minDigit);
	return countMin;
}

const char TITLE[] = "Amount of min digit of the number \n";
void runEx()
{
	printf("%s1 digits: 0-9, 2 digits: 10-99, 3 digits: 100-999\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	printf("Amount of min digit of the number is: %d\n", amountOfMinDigitOfNumber(n));
};

int main(void)
{
	runEx();
	return 0;
}