#include <stdio.h>
#include <math.h>

void printRectangle(int width, int height)
{
	for (int i = 1; i <= height; i++)
	{
		for (int j = 1; j <= width; j++)
		{
			if (i == 1 || i == height || j == 1 || j == width) {
				printf("* ");
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
	}
}
const char TITLE[] = "Print rectangle by *\n";
void runEx()
{
	printf("%sm x n \n", TITLE);
	unsigned int m;
	printf("\nPlease enter an integer value of m: ");
	scanf("%d", &m);
	if (m <= 0)
	{
		printf("\nx must be positive integer\n");
		return;
	}

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);
	// check n is positive integer
	if (n <= 0)
	{
		printf("\ny must be positive integer\n");
		return;
	}
	printRectangle(m, n);
};

int main(void)
{
	runEx();
	return 0;
}