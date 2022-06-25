#include <stdio.h>
#include <math.h>

int amountOfFirstDigitOfNumber(int number)
{
	int firstDigit = 0, countFirstDigit = 0;
	for (int i = number; i > 0; i /= 10)
	{
		firstDigit = i % 10;
	}

	for (int i = number; i > 0; i /= 10)
	{
		if (firstDigit == i % 10)
		{
			countFirstDigit += 1;
		}
	}
	printf("First digit of the number is: %d\n", firstDigit);
	return countFirstDigit;
}

const char TITLE[] = "Amount of min digit of the number \n";
void runEx()
{
	printf("%s1 digits: 0-9, 2 digits: 10-99, 3 digits: 100-999\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	printf("Amount of first digit of the number is: %d\n", amountOfFirstDigitOfNumber(n));
};

int main(void)
{
	runEx();
	return 0;
}