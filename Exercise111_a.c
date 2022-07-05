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
		for (int j = 1; j <= 2 * h - 1; j++)
		{
			// i = 1 -> j >= 4 - 0 = 4 && j <= 4 + 0 = 4 -> (1,4);
			// i = 2 -> j >= 4 - 1 = 3 && j <= 4 + 1 = 5 -> (2,3); (2,4); (2,5)
			// i = 3 -> j >= 4 - 2 = 2 && j <= 4 + 2 = 6 -> (3,2); (3,3); (3,4); (3,5); (3,6)
			// i = 4 -> j >= 4 - 3 = 1 && j <= 4 + 3 = 7 -> (4,1); (4,2); (4,3); (4,4); (4,5); (4,6); (4,7)
			if (j >= h - (i - 1) && j <= h + (i - 1)) {
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