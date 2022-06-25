#include <stdio.h>

void findMaxDivisor(int a, int b)
{
	// 45, 27
	int min = a;
	if(min > b) {
		min = b;
	}
	// a = 45, b = 27
	// i = 27 -> a % i != 0, b % i == 0
	// i = 9 -> a % i == 0, b % i == 0 -> max = 9
	for (int i = min; i > 0; --i)
	{
		if (a % i == 0 && b % i == 0) {
			printf("Max Divisor of %d and %d is: %d\n", a, b, i);
			break;
		}
	};
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

	findMaxDivisor(a, b);
	// printf("D(%d, %d) = %d \n", findMaxDivisor(a, b));
};

int main(void)
{
	runEx();
	return 0;
}