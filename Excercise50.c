#include <stdio.h>
#include <math.h>

int reverseDigitOfNumber(int number)
{
	int digit = 0, reverseNumber = 0;
	for (int i = number; i > 0; i /= 10)
	{
		digit = number % 10;
		reverseNumber = reverseNumber * 10 + digit;
		number = number / 10;
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