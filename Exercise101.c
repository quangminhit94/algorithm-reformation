#include <stdio.h>

int day(int month, int year)
{
	int day = 0;
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		day = 31;
	else if(month == 4 || month == 6 || month == 9 || month == 11)
		day = 30;
	else if(month == 2)
	{
		if(year % 4 == 0)
			day = 29;
		else
			day = 28;
	}
	return day;
};

const char TITLE[] = "Input month and year, find number of days\n";
void runEx()
{
	printf("%s12/2021 -> 31 days \n", TITLE);

	unsigned int month;
	printf("\nPlease enter an integer value of month: ");
	scanf("%d", &month);
	if (month <= 0)
	{
		printf("\nmonth must be positive integer\n");
		return;
	}
	else if(month > 12)
	{
		printf("\nmonth must be less than or equal to 12\n");
		return;
	}
	unsigned int year;
	printf("\nPlease enter an integer value of year: ");
	scanf("%d", &year);
	if (year <= 0)
	{
		printf("\nyear must be positive integer\n");
		return;
	}
	else if (year > 9999)
	{
		printf("\nyear must be less than or equal to 9999\n");
		return;
	}

	printf("month %d, year %d has %d days\n", month, year, day(month, year));
};

int main(void)
{
	runEx();
	return 0;
}