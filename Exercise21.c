#include <stdio.h>
#include <math.h>

void findSumOfDivisorNumber(int n)
{
	printf("Divisor of %d is: ", n);
	int sum = 0;
	for (int i = n; i > 0; --i)
	{
		if (n % i == 0)
		{
			printf("%d ", i);
			sum += i;
		}
	};
	printf("\nTotal of divisor number %d: %d\n", n, sum);
}

const char TITLE[] = "Find total of divisor number \n";
void runEx()
{
	printf("%s", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	findSumOfDivisorNumber(n);
};

int main(void)
{
	runEx();
	return 0;
}