#include <stdio.h>
#include <math.h>

// a = 0 -> bx^2 + c = 0 -> if -c/a >= 0 -> x = +-sqrt(-c/a), if -c/a < 0 -> x = undefined
// a = 0, b = 0 -> c = 0 -> x = undefined
// a = 0, b = 0, c = 0 -> 0x^4 + 0x^2 + 0 = 0 -> x is infinitely many roots
// b = 0 -> ax^4 + c = 0 -> if -c/a >= 0 -> x = +-sqrt(4)(-c/a), if -c/a < 0 -> x = undefined
// b = 0, c = 0 -> ax^4 = 0 -> x = 0
// c = 0 -> ax^4 + bx^2 = 0 -> x^2(ax^2 + b) = 0 -> x1 = 0, if -b/a >= 0 -> x2 = +-sqrt(-b/a), if -b/a < 0 -> x2 = undefined

// a, b, c != 0, X = x^2; ax^4 + bx^2 + c = 0
// delta < 0 -> X is undefined -> x is given equation has two imaginary roots
// delta = 0 -> X = abs(- b / 2.0 * a) -> x1, x2, x3, x4
// delta > 0 -> X1, X2 -> x1, x2, x3, x4

void findX(int a, int b, int c)
{
	printf("%dx^4 + %dx^2 + %d = 0\n", a, b, c);
	if (a == 0)
	{
		// 0x^4 + 0x^2 + c = 0
		if (b == 0)
		{
			if (c == 0)
			{
				printf("x is infinitely many roots\n");
				return;
			}
			printf("x is undefined\n");
			return;
		}
		// bx^2 + c = 0
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
	// ax^4 + c = 0
	if(b == 0) {
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
			x1 = pow(X, 1/4);
			x2 = -pow(X, 1/4);
			printf("x1 = %lf and x2 = %lf\n", x1, x2);
		}
		else
		{
			printf("x is undefined\n");
		}
		return;
	}
	// c = 0 -> ax^4 + bx^2 = 0 -> x^2(ax^2 + b) = 0 -> x1 = 0, if -b/a >= 0 -> x2 = +-sqrt(-b/a), if -b/a < 0 -> x2 = undefined
	if(c == 0) {
		double x1;
		x1 = 0;
		printf("x1 = %lf\n", x1);
		double X;
		X = -1.0 * b / a;
		if(X >= 0) {
			double x2, x3;
			x2 = sqrt(X);
			x3 = - sqrt(X);
			printf("x2 = %lf\n", x2);
			printf("x3 = %lf\n", x3);
		}
	}
	// ax^4 + bx^2 + c = 0
	double delta = b * b - 4.0 * a * c;
	printf("delta = %lf\n", delta);
	if (delta < 0)
	{
		printf("x is undefined\n");
		return;
	}
	// aX^2 + bX + c = 0, X = x^2
	if(delta == 0) {
		double X;
		X = - b / 2.0 * a;
		if(X >= 0) {
			double x1, x2;
			x1 = sqrt(X);
			x2 = -1.0 * sqrt(X);
			printf("x1 = %lf\n", x1);
			printf("x2 = %lf\n", x2);
		}
		else {
			printf("x is undefined\n");
		}
		return;
	}
	// aX^2 + bX + c = 0, X = x^2
	if (delta > 0)
	{
		double X1, X2;
		X1 = (-1.0 * b + sqrt(delta)) / (2.0 * a);
		X2 = (-1.0 * b - sqrt(delta)) / (2.0 * a);
		double x1, x2, x3, x4;
		if(X1 >= 0) {
			x1 = sqrt(X1);
			x2 = -1.0 * sqrt(X1);
			printf("x1 = %lf\n", x1);
			printf("x2 = %lf\n", x2);
		}
		if(X2 >= 0) {
			x3 = sqrt(X2);
			x4 = -1.0 * sqrt(X2);
			printf("x3 = %lf\n", x3);
			printf("x4 = %lf\n", x4);
		}
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