#include <stdio.h>
#include <math.h>


void isAscendingNumber(int number)
{
	int digit = 0, previousDigit = number % 10;
	char isAscendingNumber = 'y';
	for (int i = number; i > 0; i /= 10)
	{
		// 1234
		// digit = 4, prev = 4
		// digit = 3, prev = 4 -> digit < prev
		digit = i % 10;
		if (digit > previousDigit)
		{
			isAscendingNumber = 'n';
			printf("the number %d is NOT a Ascending Number\n", number);
			break;
		}
		previousDigit = digit;
	}
	if (isAscendingNumber == 'y')
		printf("the number %d is a Ascending Number\n", number);
		
	
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