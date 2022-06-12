#include <stdio.h>
#include <math.h>

void findProductOfDivisorNumber(int n)
{
	printf("Divisor of %d is: ", n);
	int product = 1;
	for (int i = n; i > 0; --i)
	{
		if (n % i == 0)
		{
			printf("%d ", i);
			product *= i;
		}
	};
	printf("\nProduct of divisor number %d: %d\n", n, product);
}

const char TITLE[] = "Find product of divisor number \n";
void runEx()
{
	printf("%s", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	findProductOfDivisorNumber(n);
};

int main(void)
{
	runEx();
	return 0;
}