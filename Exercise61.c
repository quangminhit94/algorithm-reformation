#include <stdio.h>
#include <math.h>

void isDescNumber(int number)
{
	int digit = 0, previousDigit = 0;
	char isDescNumber = 'y';
	for (int i = number; i > 0; i /= 10)
	{
		digit = i % 10;
		if (digit < previousDigit)
		{
			isDescNumber = 'n';
			printf("the number %d is NOT a Desc Number\n", number);
			break;
		}
		previousDigit = digit;
	}
	if (isDescNumber == 'y')
		printf("the number %d is a Desc Number\n", number);
}

const char TITLE[] = "Is the number Desc number or not \n";
void runEx()
{
	printf("%s1 digits: 0-9, 2 digits: 10-99, 3 digits: 100-999\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	isDescNumber(n);
};

int main(void)
{
	runEx();
	return 0;
}