#include <stdio.h>
#include <stdlib.h>
void printNameOfNumber(int n)
{
	// n = 123
	int firstDigit = n / 100;
	int thirdDigit = n % 10;
	int secondDigit = (n % 100 - thirdDigit) / 10;

	if (firstDigit == 1)
		printf("one hundred");
	else if (firstDigit == 2)
		printf("two hundred");
	else if (firstDigit == 3)
		printf("three hundred");
	else if (firstDigit == 4)
		printf("four hundred");
	else if (firstDigit == 5)
		printf("five hundred");
	else if (firstDigit == 6)
		printf("six hundred");
	else if (firstDigit == 7)
		printf("seven hundred");
	else if (firstDigit == 8)
		printf("eight hundred");
	else if (firstDigit == 9)
		printf("nine hundred");
	if (secondDigit != 0)
		printf(" and ");
	if (secondDigit == 1)
	{
		if (thirdDigit == 0)
			printf("ten");
		else if (thirdDigit == 1)
			printf("eleven");
		else if (thirdDigit == 2)
			printf("twelve");
		else if (thirdDigit == 3)
			printf("thirteen");
		else if (thirdDigit == 4)
			printf("fourteen");
		else if (thirdDigit == 5)
			printf("fifteen");
		else if (thirdDigit == 6)
			printf("sixteen");
		else if (thirdDigit == 7)
			printf("seventeen");
		else if (thirdDigit == 8)
			printf("eighteen");
		else if (thirdDigit == 9)
			printf("nineteen");
	}
	else if (secondDigit == 2)
		printf("twenty");
	else if (secondDigit == 3)
		printf("thirty");
	else if (secondDigit == 4)
		printf("forty");
	else if (secondDigit == 5)
		printf("fifty");
	else if (secondDigit == 6)
		printf("sixty");
	else if (secondDigit == 7)
		printf("seventy");
	else if (secondDigit == 8)
		printf("eighty");
	else if (secondDigit == 9)
		printf("ninety");
	if (thirdDigit != 0)
		printf(" ");
	if (thirdDigit == 1)
		printf("one");
	else if (thirdDigit == 2)
		printf("two");
	else if (thirdDigit == 3)
		printf("three");
	else if (thirdDigit == 4)
		printf("four");
	else if (thirdDigit == 5)
		printf("five");
	else if (thirdDigit == 6)
		printf("six");
	else if (thirdDigit == 7)
		printf("seven");
	else if (thirdDigit == 8)
		printf("eight");
	else if (thirdDigit == 9)
		printf("nine");

	printf("\n");
};

const char TITLE[] = "Read name of the double digit number\n";
void runEx()
{
	printf("%sn = 12 -> twelve\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);
	// check n is positive integer
	if (n < 0)
	{
		printf("Invalid number, n must be positive integer\n");
		return;
	}
	else if (n < 100 || n > 999)
	{
		printf("Invalid number, n must be between 100 and 999\n");
		return;
	}
	printNameOfNumber(n);
};

int main(void)
{
	runEx();
	return 0;
}