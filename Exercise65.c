#include <stdio.h>
#include <math.h>
// a = 0 -> bx + c = 0 -> x = - c / b
// a = 0, b = 0 -> c = 0 -> x = undefined
// a = 0, b = 0, c = 0 -> 0x^2 + 0x + 0 = 0 -> x is infinitely many roots
// b = 0 -> ax^2 + c = 0 -> if -c/a >= 0 -> x = +-sqrt(-c/a), if -c/a < 0 -> x = undefined
// b = 0, c = 0 -> ax^2 = 0 -> x = 0
// c = 0 -> ax^2 + bx = 0 -> x(ax + b) = 0 -> x1 = 0, x2 = -b/a

// a, b, c != 0; ax^2 + bx + c = 0
// delta < 0 -> x is given equation has two imaginary roots
// delta = 0 -> x1 = x2
// delta > 0 -> x1, x2
void findX(int a, int b, int c)
{
	printf("%dx^2 + %dx + %d = 0\n", a, b, c);
	if (a == 0)
	{
		if (b == 0)
		{
			if(c == 0) {
				printf("x is infinitely many roots\n");
				return;
			}
			printf("x is undefined\n");
			return;
		}
		double x;
		x = c * -1.0 / b;
		printf("x = %lf\n", x);
		return;
	}
	// ax^2 + c = 0
	if (b == 0)
	{
		if(c == 0) {
			double x = 0 / a;
			printf("x = %lf\n", x);
			return;
		}
		double X;
		X = -1.0 * c / a;
		if (X >= 0)
		{
			double x1, x2;
			x1 = sqrt(X);
			x2 = -sqrt(X);
			printf("x1 = %lf and x2 = %lf\n", x1, x2);
		}
		else
		{
			printf("x is undefined\n");
		}
		return;
	}
	if(c == 0) {
		double x1, x2;
		x1 = 0;
		x2 = -1.0 * b / a;
		printf("x1 = %lf and x2 = %lf\n", x1, x2);
	}

	double delta = b * b - 4.0 * a * c;

	if (delta < 0)
	{
		printf("x is given equation has two imaginary roots\n");
		return;
	}
	if (delta == 0)
	{
		double x1, x2;
		x1 = x2 = -b / 2.0 * a;
		printf("x1 = x2 = %lf\n", x1);
		return;
	}
	if (delta > 0)
	{
		double x1, x2;
		x1 = (-b + sqrt(delta)) / (2.0 * a);
		x2 = (-b - sqrt(delta)) / (2.0 * a);
		printf("x1 = %lf and x2 = %lf\n", x1, x2);
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