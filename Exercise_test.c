#include <stdio.h>

void runEx()
{
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
	
	if (a == 0 && b == 0 || c == 0 && d == 0)
	{
		printf("x, y are undefined\n");
	}
	else {
		printf("c d !=0\n");
	}
};

int main(void)
{
	runEx();
	return 0;
}