#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void findTypeOfTriangle(int a, int b, int c)
{
	// a, b, c are the sides of a triangle
	// a, b, c are positive
	// find type of the triangle
	// type of triangle is:
	// 1. Equilateral triangle
	// 2. Isosceles triangle
	// 3. Scalene triangle
	// 4. Not a triangle
	if(a <= 0 || b <= 0 || c <= 0) {
		printf("This is not a triangle\n");
	}
	else if (a == b && a == c && b == c)
	{
		printf("Equilateral triangle\n");
	}
	else if (a == b || a == c || b == c)
	{
		printf("Isosceles triangle\n");
	}
	else
	{
		printf("Scalene triangle\n");
	}
}

const char TITLE[] = "Input 3 sides of a triangle then print type of triangle";
void runEx()
{
	printf("%s\n", TITLE);

	unsigned int a;
	printf("\nPlease enter an integer value of a: ");
	scanf("%d", &a);
	unsigned int b;
	printf("\nPlease enter an integer value of b: ");
	scanf("%d", &b);
	unsigned int c;
	printf("\nPlease enter an integer value of c: ");
	scanf("%d", &c);

	findTypeOfTriangle(a, b, c);
};

int main(void)
{
	runEx();
	return 0;
}