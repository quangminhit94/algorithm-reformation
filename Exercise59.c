#include <stdio.h>
#include <math.h>

void isSymmetricNumber(int number)
{
	int digit = 0, reverseNumber = 0;
	for (int i = number; i > 0; i /= 10)
	{
		digit = i % 10;
		reverseNumber = reverseNumber * 10 + digit;
	}
	if(reverseNumber == number)
		printf("%d is a symmetric number\n", number);
	else
		printf("%d is NOT a symmetric number\n", number);
	
}

const char TITLE[] = "Is the number symmetric or not \n";
void runEx()
{
	printf("%s11 101 13131 is symmetric number\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	isSymmetricNumber(n);
};

int main(void)
{
	runEx();
	return 0;
}