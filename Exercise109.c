#include <stdio.h>
#include <math.h>

const char TITLE[] = "Print times table\n";
void runEx()
{
	printf("%sEx: 2 x 1 = 2 \n", TITLE);
	int n = 10;
	for (int i = 1; i < n; i++) {
		printf("\n");
		for(int j = 1; j <= n; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}
};

int main(void)
{
	runEx();
	return 0;
}