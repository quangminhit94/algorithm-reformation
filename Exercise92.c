#include <stdio.h>
#include <math.h>

int maxDivisor(int a, int b)
{
	// 45, 27 -> 9 is max divisor
	int maxDivisor = 1;
	for(int i = 1; i <= a && i <= b; i++)
	{
		if(a % i == 0 && b % i == 0)
		{
			maxDivisor = i;
		}
	}
	return maxDivisor;
};

const char TITLE[] = "Find max divisor numbers of a and b \n";
void runEx()
{
	printf("%sD(a, b) = ? \n", TITLE);

	unsigned int a;
	printf("\nPlease enter an integer value of a: ");
	scanf("%d", &a);
	unsigned int b;
	printf("\nPlease enter an integer value of b: ");
	scanf("%d", &b);

	printf("Max divisor of %d and %d is %d\n", a, b, maxDivisor(a, b));
};

int main(void)
{
	runEx();
	return 0;
}