#include <stdio.h>
#include <math.h>

const char TITLE[] = "Give sum = 200000. Find how many type of 1000, 2000, 5000 to create 200000\n";
void runEx()
{
	printf("%sEX: 40x5000 = 200000 \n", TITLE);
	int sum = 200000, type1 = 1000, type2 = 2000, type3 = 5000;
	int sumType1 = 0, sumType2 = 0, sumType3 = 0;
	int count = 0;

	for (int i = 0; i <= sum / type1; i++)
	{
		sumType1 = type1 * i;
		for (int j = 0; j <= sum / type2; j++)
		{
			sumType2 = type2 * j;
			for (int k = 0; k <= sum / type3; k++)
			{
				sumType3 = type3 * k;
				if (sumType1 + sumType2 + sumType3 == sum)
				{
					count++;
					printf("%d/ %d x 1000 + %d x 2000 + %d x 5000 = %d\n", count, i, j, k, sum);
				}
			}
		}
	}



	
};

int main(void)
{
	runEx();
	return 0;
}