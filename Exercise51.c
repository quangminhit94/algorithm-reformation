#include <stdio.h>
#include <math.h>

int maxDigitOfNumber(int number)
{
	int digit = 0, maxDigit = 0;
	for (int i = number; i > 0; i /= 10)
	{
		digit = i % 10;
		if(digit > maxDigit)
			maxDigit = digit;
	}
	return maxDigit;
}

const char TITLE[] = "Max digit of the number \n";
void runEx()
{
	printf("%s1 digits: 0-9, 2 digits: 10-99, 3 digits: 100-999\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	printf("n = %d, Max digit of the number is: %d\n", n, maxDigitOfNumber(n));
	
};

int main(void)
{
	runEx();
	return 0;
}