#include <stdio.h>
#include <math.h>

const char TITLE[] = "Print triangle by *\n";
void runEx()
{
	printf("%sh = 5 \n", TITLE);
	int h = 5;
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= i; j++)
		{	
			// i = 1 -> j <= 1 -> j == 1 -> (1,1);
			// i = 2 -> j <= 2 -> j == 1 -> (2,1) || j == 2 -> (2,2);
			// i = 3 -> j <= 3 -> j == 1 -> (3,1) || j == 3 == i -> (3,3)
			// ...
			// i = 5 -> j <= 5 -> j == 1 -> (5,1) || j == 5 -> (5,5) || j == i -> (5,2); (5,3); (5,4); (5,5);
			if (j == 1 || j == i || i == h) {
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