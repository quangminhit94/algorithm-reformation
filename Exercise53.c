#include <stdio.h>
#include <math.h>

// n = 14344 -> countMax = 3
int countOfMaxDigitOfNumber(int number)
{
	int digit = 0, maxDigit = 0, countMax = 0;
	for (int i = number; i > 0; i /= 10)
	{
		digit = i % 10;

		if (digit > maxDigit)
		{
			maxDigit = digit;
			countMax = 0;
		}
		if (digit == maxDigit)
		{
			countMax += 1;
		}
	}
	printf("Max digit of the number is: %d\n", maxDigit);
	return countMax;
}

const char TITLE[] = "Count of max digit of the number \n";
void runEx()
{
	printf("%s1 digits: 0-9, 2 digits: 10-99, 3 digits: 100-999\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	printf("Count of max digit of the number is: %d\n", countOfMaxDigitOfNumber(n));
};

int main(void)
{
	runEx();
	return 0;
}