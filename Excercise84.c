#include <stdio.h>

void findX(int a, int b)
{
	double x = b * -1.0 / a;
	printf("%dx + %d = 0\n", a, b);
	if(a == 0) {
		printf("x has many result");
		return;
	}
	printf("x = %lf\n", x);
};

const char TITLE[] = "ax + b = 0 \n";
void runEx()
{
	printf("%sx = ? \n", TITLE);

	unsigned int a;
	printf("\nPlease enter an integer value of a: ");
	scanf("%d", &a);
	unsigned int b;
	printf("\nPlease enter an integer value of b: ");
	scanf("%d", &b);

	findX(a, b);
};

int main(void)
{
	runEx();
	return 0;
}