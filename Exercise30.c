#include <stdio.h>
#include <math.h>

void checkIsPerfectNumber(int n)
{
	printf("Divisor number of %d is: ", n);
	// sum of all divisor not include n
	int sum = 0;
	for (int i = n - 1; i > 0; --i)
	{
		if (n % i == 0)
		{
			printf("%d ", i);
			sum += i;
		}
	};
	if (sum == n)
		printf("\n%d is a perfect number\n", n);
	else
		printf("\n%d is not a perfect number\n", n);
}

const char TITLE[] = "find Perfect Number of a number \n";
void runEx()
{
	printf("%s6 is a perfect number \n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	checkIsPerfectNumber(n);
};

int main(void)
{
	runEx();
	return 0;
}