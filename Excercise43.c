#include <stdio.h>
#include <math.h>

int countDigit(int number)
{
	// 1 digits: 0-9
	// 2 digits: 10-99
	// 3 digits: 100-999
	if (number == 0)
		return 1;

	int count = 0;
	for (int i = 1; i <= 10000; i *= 10)
	{
		if (number >= i)
			count += 1;
	}
	return count;
}

const char TITLE[] = "Count amount digits of the number \n";
void runEx()
{
	printf("%s1 digits: 0-9, 2 digits: 10-99, 3 digits: 100-999\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	printf("n = %d, count = %d \n", n, countDigit(n));
};

int main(void)
{
	runEx();
	return 0;
}