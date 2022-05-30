#include <stdio.h>
#include <math.h>

void isOddDigitOfNumber(int number)
{
	int digit = 0, count = 0, odd = 0;
	printf("\nDigits of the number %d: ", number);
	for (int i = number; i > 0; i /= 10)
	{
		digit = number % 10;
		number = number / 10;
		count += 1;
		printf("%d ", digit);
		if (digit % 2 != 0)
			odd += 1;
	}
	printf("\nAmount digits of the number: %d\n", count);
	printf("Amount odd digits of the number: %d\n", odd);
	if(count == odd)
		printf("Digits of the number is odd\n");
	else
		printf("Digits of the number is NOT odd\n");
}

const char TITLE[] = "Digits of the number is odd or not \n";
void runEx()
{
	printf("%s1 digits: 0-9, 2 digits: 10-99, 3 digits: 100-999\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	isOddDigitOfNumber(n);
};

int main(void)
{
	runEx();
	return 0;
}