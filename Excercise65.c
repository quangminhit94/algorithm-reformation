#include <stdio.h>
#include <math.h>
void findX(int a, int b, int c)
{
	double x = 0;
	printf("%dx^2 + %dx + %d = 0\n", a, b, c);
	if (a == 0)
	{
		if (b == 0)
		{
			printf("x has many result\n");
			return;
		}
		x = c * -1.0 / b;
		printf("x = %lf\n", x);
		return;
	}
	double delta = b * b - 4.0 * a * c;
	double x1 = 0, x2 = 0;
	if(delta == 0) {
		x = - b / 2.0 * a;
		printf("x = %lf\n", x);
		return;
	}
	if (delta > 0)
	{
		x1 = (-b + sqrt(delta)) / 2.0 * a;
		x2 = (-b - sqrt(delta)) / 2.0 * a;
		printf("x1 = %lf and x2 = %lf\n", x1, x2);
		return;
	}
	if (delta < 0)
	{
		printf("x has no result\n");
		return;
	}
};

const char TITLE[] = "ax^2 + bx + c= 0 \n";
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