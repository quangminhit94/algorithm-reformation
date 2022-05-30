#include <stdio.h>

void findMaxDivisor(int a, int b)
{
	// 45, 27
	int temp = 0, max = 0;
	if(a < b) {
		temp = a;
		a = b;
		b = temp;
	}
	printf("Divisor of %d and %d is: ", a, b);
	for (int i = a; i > 0; --i)
	{
		for(int j = i; j < b; ++j) {
			if (b % j == 0 && j == i)
			{
				printf("%d ", j);
				if(j > max) max = j;
			}
		}
	};
	printf("\n");
	printf("Max Divisor of %d and %d is: %d\n", a, b, max);
	// return max;
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