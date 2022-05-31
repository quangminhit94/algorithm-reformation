#include <stdio.h>

void findLcm(int a, int b)
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
	int lcm = 0;
	lcm = a / max * b;
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