#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void findAbs(int a, int b, int c)
{
	printf("|a| = %d, |b| = %d, |c| = %d\n", abs(a), abs(b), abs(c));
}

const char TITLE[] = "Print asb of number a, b, c";
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

	findAbs(a, b, c);
};

int main(void)
{
	runEx();
	return 0;
}