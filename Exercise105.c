#include <stdio.h>
#include <stdlib.h>
void printNameOfNumber(int n)
{
	int firstDigit = n / 10;
	int secondDigit = n % 10;
	
	if(firstDigit == 1){
		if(secondDigit == 0)
			printf("ten");
		else if(secondDigit == 1)
			printf("eleven");
		else if(secondDigit == 2)
			printf("twelve");
		else if(secondDigit == 3)
			printf("thirteen");
		else if(secondDigit == 4)
			printf("fourteen");
		else if(secondDigit == 5)
			printf("fifteen");
		else if(secondDigit == 6)
			printf("sixteen");
		else if(secondDigit == 7)
			printf("seventeen");
		else if(secondDigit == 8)
			printf("eighteen");
		else if(secondDigit == 9)
			printf("nineteen");
	}
	if(firstDigit == 2)
		printf("twenty");
	else if(firstDigit == 3)
		printf("thirty");
	else if(firstDigit == 4)
		printf("forty");
	else if(firstDigit == 5)
		printf("fifty");
	else if(firstDigit == 6)
		printf("sixty");
	else if(firstDigit == 7)
		printf("seventy");
	else if(firstDigit == 8)
		printf("eighty");
	else if(firstDigit == 9)
		printf("ninety");
	if(secondDigit != 0)
		printf(" ");
	if(secondDigit == 1)
		printf("one");
	else if(secondDigit == 2)
		printf("two");
	else if(secondDigit == 3)
		printf("three");
	else if(secondDigit == 4)
		printf("four");
	else if(secondDigit == 5)
		printf("five");
	else if(secondDigit == 6)
		printf("six");
	else if(secondDigit == 7)
		printf("seven");
	else if(secondDigit == 8)
		printf("eight");
	else if(secondDigit == 9)
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
	else if (n < 10 || n > 99)
	{
		printf("Invalid number, n must be double digit number\n");
		return;
	}
	printNameOfNumber(n);
};

int main(void)
{
	runEx();
	return 0;
}