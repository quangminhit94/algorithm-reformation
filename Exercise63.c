#include <stdio.h>

void findLcm(int a, int b)
{
	// 45, 27
	int maxDivisor = 1;
	for(int i = 1; i <= a && i <= b; i++)
	{
		if(a % i == 0 && b % i == 0)
		{
			maxDivisor = i;
		}
	}
	printf("\n");
	printf("Max Divisor of %d and %d is: %d\n", a, b, maxDivisor);
	int lcm = 0;
	lcm = a * b / maxDivisor;
	printf("Least common multiple of integers %d and %d is: %d\n", a, b, lcm);
};

const char TITLE[] = "Least common multiple of integers a and b \n";
void runEx()
{
	printf("%sLcm(a, b) = ?. Ex: 4 and 6 is 12 \n", TITLE);

	unsigned int a;
	printf("\nPlease enter an integer value of a: ");
	scanf("%d", &a);
	unsigned int b;
	printf("\nPlease enter an integer value of b: ");
	scanf("%d", &b);

	findLcm(a, b);
};

int main(void)
{
	runEx();
	return 0;
}