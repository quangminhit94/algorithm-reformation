#include <stdio.h>
#include <math.h>

const char TITLE[] = "Print triangle by *\n";
void runEx()
{
	printf("%sh = 4 \n", TITLE);
	int h = 4;
	for (int i = 1; i <= h; i++)
	{
		// i = 1 -> j <= 1 -> (1,1);
		// i = 2 -> j <= 2 -> (2,1); (2,2);
		// i = 3 -> j <= 3 -> (3,1); (3,2); (3,3);
		// i = 4 -> j <= 4 -> (4,1); (4,2); (4,3); (4,4);
		for (int j = 1; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
};

int main(void)
{
	runEx();
	return 0;
}