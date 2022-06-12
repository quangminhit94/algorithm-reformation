#include <stdio.h>
#include <math.h>

void findGreatestOddDivisorOfNumber(int n)
{
	printf("Odd divisor of %d is: ", n);
	for (int i = n; i > 0; --i)
	{
		if (n % i == 0 && i % 2 != 0)
		{
			printf("%d ", i);
			break;
		}
	};
	printf("\n");
}

const char TITLE[] = "Find Greatest Odd Divisor Of a Number \n";
void runEx()
{
	printf("%sGreatest Odd divisor of 18 is 1, 3, 9 \n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	findGreatestOddDivisorOfNumber(n);
};

int main(void)
{
	runEx();
	return 0;
}