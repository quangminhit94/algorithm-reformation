#include <stdio.h>

void findX(int a, int b, int c, int d, int e, int f)
{
	// ax + by = c
	// dx + ey = f
	double x = 0, y = 0;
	if (a == 0 && b == 0 && c == 0 || d == 0 && e == 0 && f == 0)
	{
		printf("x, y are infinitely many roots\n");
	}
	else if (a == 0 && b == 0 || d == 0 && e == 0)
	{
		printf("x, y are undefined\n");
	}
	else if (a == 0 && c == 0)
	{
		// 0x + by = 0
		// dx + ey = f
		x = -f / d;
		y = 0;
		printf("x = %lf, y = %lf\n", x, y);
	}
	else if (d == 0 && f == 0)
	{
		// ax + by = c
		// 0x + ey = 0
		x = -c / a;
		y = 0;
		printf("x = %lf, y = %lf\n", x, y);
	}
	else if(b == 0 && c == 0)
	{
		// ax + 0y = 0
		// dx + ey = f
		x = 0;
		y = -f / e;
		printf("x = %lf, y = %lf\n", x, y);
	}
	else if(e == 0 && f == 0)
	{
		// ax + by = c
		// dx + 0y = 0
		x = 0;
		y = -c / b;
		printf("x = %lf, y = %lf\n", x, y);
	}
	else if (a == 0) {
		// 0x + by = c
		// dx + ey = f
		// y = -c / b
		// dx + e(-c/b) = f
		// dx - ec/b = f
		// dx = f + ec/b
		// dbx = fb + ec
		// x = (fb + ec) / db
		x = (f * b + e * c) / (d * b);
		y = -c / b;
		printf("x = %lf, y = %lf\n", x, y);
	}
	else if (b == 0) {
		// ax + 0y = c
		// dx + ey = f
		// x = -c / a
		// ey - dc/a = f
		// ey = f + dc/a
		// eay = fa + dc
		// y = (fa + dc) / ea
		x = -c / a;
		y = (f * a + d * c) / (e * a);
		printf("x = %lf, y = %lf\n", x, y);
	}
	else if (c == 0) {
		// ax + by = 0
		// dx + ey = f
		// x = -by/a
		// ey - dby/a = f
		// aey - dby = fa
		// y(ae - db) = fa
		// y = fa / (ae - db)
		y = f * a / (e * a - d * b);
		x = -b * y / a;
		printf("x = %lf, y = %lf\n", x, y);
	}
	else if (d == 0) {
		// ax + by = c
		// 0x + ey = f
		// y = f / e
		// ax + bf/e = c
		// axe + bf = ce
		// x = (c * e - b * f) / a * e
		x = (c * e - b * f) / a * e;
		y = f / e;
		printf("x = %lf, y = %lf\n", x, y);
	}
	else if (e == 0) {
		// ax + by = c
		// dx + 0y = f
		// x = f / d
		// af/d + by = c
		// af + bdy = c
		// y = (c - af) / bd
		x = f / d;
		y = (c - a * f) / (b * d);
		printf("x = %lf, y = %lf\n", x, y);
	}
	else if(f == 0) {
		// ax + by = c
		// dx + ey = 0
		// y = -dx/e
		// ax + bdx/e = c
		// axe + bdx = ce
		// x(ae + bd) = ce
		// x = ce / (ae + bd)
		x = c * e / (a * e + b * d);
		y = -d * x / e;
		printf("x = %lf, y = %lf\n", x, y);
	}
	else
	{
		// ax + by = c
		// dx + ey = f
		// x = (c - by)/a;
		// d(c - by)/a + ey = f
		// d(c - by) + aey = fa
		// dc - bdy + aey = fa
		// dc + y(ae - bd) = fa
		// y(ae - bd) = fa - dc
		// y = (fa - dc) / (ae - bd)
		y = (f * a - d * c) / (e * a - d * b);
		x = (c - b * y) / a;
		printf("x = %lf, y = %lf\n", x, y);
	}
};

const char TITLE[] = "ax + by = c \n";
void runEx()
{
	printf("%sdx + ey = f \n", TITLE);

	unsigned int a;
	printf("\nPlease enter an integer value of a: ");
	scanf("%d", &a);
	unsigned int b;
	printf("\nPlease enter an integer value of b: ");
	scanf("%d", &b);
	unsigned int c;
	printf("\nPlease enter an integer value of c: ");
	scanf("%d", &c);
	unsigned int d;
	printf("\nPlease enter an integer value of d: ");
	scanf("%d", &d);
	unsigned int e;
	printf("\nPlease enter an integer value of e: ");
	scanf("%d", &e);
	unsigned int f;
	printf("\nPlease enter an integer value of f: ");
	scanf("%d", &f);

	findX(a, b, c, d, e, f);
	
};

int main(void)
{
	runEx();
	return 0;
}