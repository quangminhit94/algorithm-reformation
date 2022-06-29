#include <stdio.h>
#include <math.h>

void findNumber(int n)
{
	for (int i = 1; i <= n; ++i)
	{
		if(i % 2 != 0)
			printf("%d ", i);
	}
	printf("\n");
}

const char TITLE[] = "Print all odd number less than 100";
void runEx()
{
	printf("%s\n", TITLE);
	findNumber(100);
};

int main(void)
{
	runEx();
	return 0;
}