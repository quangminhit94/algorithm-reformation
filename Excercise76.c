#include <stdio.h>
#include <math.h>

void checkIsPow2(int n)
{
	char isPow2 = 'n';
	for (int i = 1; i <= n; ++i)
	{
		if (pow(3, i) == n && pow(3, i) <= n)
			isPow2 = 'y';
	}
	if (isPow2 == 'y')
		printf("%d has 3^k\n", n);
	else
		printf("%d has NOT 3^k\n", n);
}

const char TITLE[] = "Check number has 3^k or not \n";
void runEx()
{
	printf("%s", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	checkIsPow2(n);
};

int main(void)
{
	runEx();
	return 0;
}