#include <stdio.h>
#include <math.h>

void isAscendingNumber(int number)
{
	int digit = 0, temp = number, previousDigit = 0;
	char isAscendingNumber = 'y';
	for (int i = number; i > 0; i /= 10)
	{
		digit = temp % 10;
		temp = temp / 10;
		if (digit > previousDigit)
		{
			previousDigit = digit;
			isAscendingNumber = 'n';
		}
		else
		{
			isAscendingNumber = 'y';
		}
	}
	if (isAscendingNumber == 'y')
		printf("the number %d is a Ascending Number\n", number);
	else 
		printf("the number %d is NOT a Ascending Number\n", number);
	
}

const char TITLE[] = "Is the number Ascending number or not \n";
void runEx()
{
	printf("%s1 digits: 0-9, 2 digits: 10-99, 3 digits: 100-999\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	isAscendingNumber(n);
};

int main(void)
{
	runEx();
	return 0;
}