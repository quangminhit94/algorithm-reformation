#include <stdio.h>
#include <math.h>

void printAscNumbers(int a, int b, int c)
{
	// print a, b, c from smallest to largest 
	int temp = a;
	if (b < a)
	{
		temp = b;
		b = a;
		a = temp;
	}
	if (c < a)
	{
		temp = c;
		c = a;
		a = temp;
	}
	if (c < b)
	{
		temp = c;
		c = b;
		b = temp;
	}
	printf("%d %d %d\n", a, b, c);
}

const char TITLE[] = "Print a, b, c from smallest to largest";
void runEx()
{
	printf("%s\n", TITLE);

	int a;
	printf("\nPlease enter an integer value of a: ");
	scanf("%d", &a);
	int b;
	printf("\nPlease enter an integer value of b: ");
	scanf("%d", &b);
	int c;
	printf("\nPlease enter an integer value of c: ");
	scanf("%d", &c);

	printAscNumbers(a, b, c);
};

int main(void)
{
	runEx();
	return 0;
}