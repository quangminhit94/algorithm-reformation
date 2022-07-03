#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int dayInYear(int day, int month, int year)
{
	int result = 0;
	for (int i = 1; i < month; i++)
	{
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
		{
			result += 31;
		}
		else if (i == 4 || i == 6 || i == 9 || i == 11)
		{
			result += 30;
		}
		else if (i == 2)
		{
			if (year % 4 != 0)
			{
				result += 28;
			}
			else
			{
				result += 29;
			}
		}
	}
	result += day;
	return result;
};

const char TITLE[] = "Input day, month and year, find previous day\n";
void runEx()
{
	printf("%s1/3/2022 -> 28/2/2022 \n", TITLE);

	unsigned int day;
	printf("\nPlease enter an integer value of day: ");
	scanf("%d", &day);
	if (day <= 0)
	{
		printf("\nday must be positive integer\n");
		return;
	}
	else if (day > 31)
	{
		printf("\nday must be less than or equal to 31\n");
		return;
	}
	unsigned int month;
	printf("\nPlease enter an integer value of month: ");
	scanf("%d", &month);
	if (month <= 0)
	{
		printf("\nmonth must be positive integer\n");
		return;
	}
	else if (month > 12)
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
	int result = dayInYear(day, month, year);
	printf("%d/%d/%d is the %dth day of the year\n", day, month, year, result);
};

int main(void)
{
	runEx();
	return 0;
}