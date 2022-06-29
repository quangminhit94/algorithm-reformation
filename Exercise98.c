#include <stdio.h>

void findX(int a, int b, int c, int d, int e, int f)
{
	double x = 0, y = 0;
	if(a == 0)
		y = -1.0 * c / b;
	else if(b == 0)
		x = -1.0 * c / a;
	else if(d == 0)
		y = -1.0 * f / e;
	else if(e == 0)
		y = -1.0 * f / d;
	else
	{
		// x = (c - b*y)/a;
		// x = (c - b*y)/a;
		// d*(c - b*y)/a + e*y = f
		// d*c/a - d*b*y/a + e*y = f
		// y(-d*b/a + e) = f - d*c/a
		y = (f - d*c/a)/(-d*b/a + e);
		x = (c - b*y)/a;
	}
	
	printf("x = %lf, y = %lf\n", x, y);
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