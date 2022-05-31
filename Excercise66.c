#include <stdio.h>
#include <math.h>
void findX(int a, int b, int c)
{
	printf("%dx^4 + %dx^2 + %d = 0\n", a, b, c);
	if (a == 0)
	{
		if (b == 0)
		{
			printf("x has many result\n");
			return;
		}
		double x1 = - sqrt(1.0 * c / b);
		double x2 = -x1;
		printf("x1 = %lf\n", x1);
		printf("x2 = %lf\n", x2);
		return;
	}
	double delta = b * b - 4.0 * a * c;
	if(delta == 0) {
		double x1 = - sqrt(b / 2.0 * a);
		double x2 = -x1;
		printf("x1 = %lf\n", x1);
		printf("x2 = %lf\n", x2);
		return;
	}
	if (delta > 0)
	{
		double x1 = 0, x2 = 0, x3 = 0, x4 = 0;
		x1 = - sqrt((b - sqrt(delta)) / 2.0 * a);
		x2 = - x1;
		x3 = - sqrt(b + sqrt(delta)) / 2.0 * a;
		x4 = - x3;
		printf("x1 = %lf\n", x1);
		printf("x2 = %lf\n", x2);
		printf("x3 = %lf\n", x3);
		printf("x4 = %lf\n", x4);
		return;
	}
	if (delta < 0)
	{
		printf("x has no result\n");
		return;
	}
};

const char TITLE[] = "ax^4 + bx^2 + c= 0 \n";
void runEx()
{
	printf("%sx = ? \n", TITLE);

	unsigned int a;
	printf("\nPlease enter an integer value of a: ");
	scanf("%d", &a);
	unsigned int b;
	printf("\nPlease enter an integer value of b: ");
	scanf("%d", &b);
	unsigned int c;
	printf("\nPlease enter an integer value of c: ");
	scanf("%d", &c);

	findX(a, b, c);
};

int main(void)
{
	runEx();
	return 0;
}