#include <stdio.h>
#include <math.h>

const char TITLE[] = "Print triangle by *\n";
void runEx()
{
	printf("%sh = 4 \n", TITLE);
	int h = 4;
	// print Isosceles triangle by *

	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= h * 2 - 1; j++)
		{
			if(i == h) {
				printf("* ");
			}
			else if (j == h - (i - 1) || j == h + (i - 1)) {
				printf("* ");
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
	}
	
};

int main(void)
{
	runEx();
	return 0;
}