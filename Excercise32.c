#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void findSquareNumbers(int n)
{
	// square number is square of a number
	// 25 / 5 = 5
	// divisor number of 25 is 5
	// 5 x chinh no  = 25
	char isSquare = 'n';
	for (int i = n; i > 0; --i)
	{
		if (n % i == 0 && i * i == n)
		{
			isSquare = 'y';
			printf("%d is a square number\n", n);
		}
	};
	if(isSquare == 'n') 
		printf("%d is not a square number\n", n);
}

const char TITLE[] = "Find all divisor numbers of a number \n";
void runEx()
{
	printf("%sDivisor of 18 is 1, 2, 3, 6, 9, 18 \n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	findSquareNumbers(n);
};

int main(void)
{
	runEx();
	return 0;
}