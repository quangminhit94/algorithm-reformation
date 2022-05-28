#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void findDivisorOfNumbers(int n)
{
	// divisor of 18 is 1, 2, 3, 6, 9, 18
	printf("Divisor of %d but odd number is: ", n);
	for (int i = n; i > 0; --i)
	{
		if (n % i == 0 && i % 2 != 0)
		{
			printf("%d ", i);
		}
	};
	printf("\n");
}

const char TITLE[] = "Find all divisor numbers of a number \n";
void runEx()
{
	printf("%sDivisor of 18 is 1, 2, 3, 6, 9, 18 \n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	findDivisorOfNumbers(n);
};

int main(void)
{
	runEx();
	return 0;
}