#include <stdio.h>
#include <math.h>

double maxNumber(double a, double b, double c)
{
	double max = a;
	if(max < b)
		max = b;
	if(max < c)
		max = c;

	return max;
};

const char TITLE[] = "Find Greatest number between a, b, c \n";
void runEx()
{
	printf("%s\n", TITLE);

	double a;
	printf("\nPlease enter an integer value of a: ");
	scanf("%lf", &a);
	double b;
	printf("\nPlease enter an integer value of b: ");
	scanf("%lf", &b);
	double c;
	printf("\nPlease enter an integer value of c: ");
	scanf("%lf", &c);

	printf("Greatest number is %lf \n", maxNumber(a, b, c));
};

int main(void)
{
	runEx();
	return 0;
}