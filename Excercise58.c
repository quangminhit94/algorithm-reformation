#include <stdio.h>
#include <math.h>

void isEvenDigitOfNumber(int number)
{
	int digit = 0, count = 0, even = 0;
	printf("\nDigits of the number %d: ", number);
	for (int i = number; i > 0; i /= 10)
	{
		digit = number % 10;
		number = number / 10;
		count += 1;
		printf("%d ", digit);
		if (digit % 2 == 0)
			even += 1;
	}
	printf("\nAmount digits of the number: %d\n", count);
	printf("Amount even digits of the number: %d\n", even);
	if(count == even)
		printf("Digits of the number is even\n");
	else
		printf("Digits of the number is NOT even\n");
}

const char TITLE[] = "Digits of the number is even or not \n";
void runEx()
{
	printf("%s1 digits: 0-9, 2 digits: 10-99, 3 digits: 100-999\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	isEvenDigitOfNumber(n);
};

int main(void)
{
	runEx();
	return 0;
}