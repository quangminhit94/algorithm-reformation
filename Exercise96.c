#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// f(x) = 2x^2 + 5x + 9 with x >= 5
// f(x) = -2x^2 + 4x - 9 with x < 5
void calculateFx(int x)
{
	if(x >= 5) {
		double fx = 2 * pow(x, 2) + 5 * x + 9;
		printf("F(x) = 2x^2 + 5x + 9 = %lf\n", fx);
	}
	if(x < 5) {
		double fx = - 2 * pow(x, 2) + 4 * x - 9;
		printf("F(x) = -2x^2 + 4x - 9 = %lf\n", fx);
	}
}

const char TITLE[] = "Input x after calculate function\n";
void runEx()
{
	printf("%sF(x) = 2x^2 + 5x + 9 when x >= 5 \n", TITLE);
	printf("F(x) = -2x^2 + 4x - 9 when x < 5 \n");

	unsigned int x;
	printf("\nPlease enter an integer value of x: ");
	scanf("%d", &x);
	
	calculateFx(x);
};

int main(void)
{
	runEx();
	return 0;
}