#include <stdio.h>
#include <math.h>

int minDigitOfNumber(int number)
{
	int digit = 0, minDigit = number;
	for (int i = number; i > 0; i /= 10)
	{
		digit = i % 10;
		if(digit < minDigit)
			minDigit = digit;
	}
	return minDigit;
}

const char TITLE[] = "Min digit of the number \n";
void runEx()
{
	printf("%s1 digits: 0-9, 2 digits: 10-99, 3 digits: 100-999\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	printf("n = %d, Min digit of the number is: %d\n", n, minDigitOfNumber(n));
	
};

int main(void)
{
	runEx();
	return 0;
}