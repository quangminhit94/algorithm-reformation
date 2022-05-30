#include <stdio.h>
#include <math.h>

int findFirstDigitOfNumber(int number)
{
	int digit = 0;
	for (int i = number; i > 0; i /= 10)
	{
		digit = number % 10;
		number = number / 10;
	}
	return digit;
}

const char TITLE[] = "Find first digit of the number \n";
void runEx()
{
	printf("%s1 digits: 0-9, 2 digits: 10-99, 3 digits: 100-999\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	printf("n = %d, First digit is: %d \n", n, findFirstDigitOfNumber(n));
};

int main(void)
{
	runEx();
	return 0;
}