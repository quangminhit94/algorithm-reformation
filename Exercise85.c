#include <stdio.h>

void findPrecious(int month)
{
	int MAX_MONTH = 12, MIN_MONTH = 1;
	int precious = 0;

	if (month >= MIN_MONTH && month <= 3)
		precious = 1;
	else if (month >= 4 && month <= 6)
		precious = 2;
	else if (month >= 7 && month <= 9)
		precious = 3;
	else if (month >= 10 && month <= MAX_MONTH)
		precious = 4;
	else
	{
		printf("This month is not exits");
		return;
	}
	printf("Month %d is belong to precious %d\n", month, precious);
};

const char TITLE[] = "Input month, find precious is belong to the month \n";
void runEx()
{
	printf("%sx = ? \n", TITLE);

	unsigned int month;
	printf("\nPlease enter an integer value of month: ");
	scanf("%d", &month);

	findPrecious(month);
};

int main(void)
{
	runEx();
	return 0;
}