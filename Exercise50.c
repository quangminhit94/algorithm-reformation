#include <stdio.h>
#include <math.h>

int reverseDigitOfNumber(int number)
{
	int digit = 0, reverseNumber = 0;
	for (int i = number; i > 0; i /= 10)
	{
		// n = 1234
		// i = 1234 -> digit = 1234 % 10 = 4 -> r = 4
		// i = 123 -> digit = 123 % 10 = 3 -> r = 4 * 10 + 3 = 43
		// i = 12 -> digit = 12 % 10 = 2 -> r = 43 * 10 + 2 = 432
		// i = 1 -> digit = 1 % 10 = 1 -> r = 432 * 10 + 1 = 4321
		digit = i % 10;
		reverseNumber = reverseNumber * 10 + digit;
	}
	return reverseNumber;
}

const char TITLE[] = "Reverse digits of the number \n";
void runEx()
{
	printf("%s1 digits: 0-9, 2 digits: 10-99, 3 digits: 100-999\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	printf("n = %d, Reverse number is: %d\n", n, reverseDigitOfNumber(n));
	
};

int main(void)
{
	runEx();
	return 0;
}