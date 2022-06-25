#include <stdio.h>
#include <math.h>

void findOddDivisorOfNumber(int n)
{
	printf("Odd divisor of %d is: ", n);
	for (int i = n; i > 0; --i)
	{
		if (n % i == 0 && i % 2 != 0)
		{
			printf("%d ", i);
		}
	};
	printf("\n");
}

const char TITLE[] = "Find odd divisor of a number \n";
void runEx()
{
	printf("%sOdd divisor of 18 is 1, 3, 9 \n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	findOddDivisorOfNumber(n);
};

int main(void)
{
	runEx();
	return 0;
}