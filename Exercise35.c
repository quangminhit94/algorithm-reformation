#include <stdio.h>
#include <math.h>

// n = 3 -> sqrt(1 + sqrt(2 + sqrt(3)))
// n = 2 -> sqrt(1 + sqrt(2))
// n = 1 -> sqrt(1)
double squareNumber(int number)
{
	double sum = 0;
	for (int i = number; i > 0; --i)
	{
		// i = 3 -> sum = sqrt(3)
		// i = 2 -> sum = sqrt(2 + sqrt(3))
		// i = 1 -> sum = sqrt(1 + sqrt(2 + sqrt(3)))
		sum = sqrt(i + sum);
	}
	return sum;
}

const char TITLE[] = "Find The sum of the members of a finite arithmetic progression is called an arithmetic series \n";
void runEx()
{
	printf("%sS(n) = sqrt(1 + sqrt(2 + sqrt(3 + ... sqrt(n-1 + sqrt(n))))) \n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	printf("S(%d) = %lf \n", n, squareNumber(n));
};

int main(void)
{
	runEx();
	return 0;
}