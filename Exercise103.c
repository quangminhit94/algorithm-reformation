#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char *previousDay(int day, int month, int year)
{
	char *result;
	result = (char *)malloc(sizeof(char) * 100);
	// check previous day
	if (day == 1 && month == 1)
	{
		day = 31;
		month = 12;
		year--;
	}
	else if (day == 1 && month == 3 && year % 4 != 0) {
		day = 28;
		month--;
	}
	else if (day == 1 && month == 3 && year % 4 == 0) {
		day = 29;
		month--;
	}
	else if (day == 1 && (month == 4 || month == 6 || month == 8 || month == 9 || month == 11)) {
		day = 31;
		month--;
	}
	else if (day == 1) {
		day = 30;
		month--;
	}
	else {
		day--;
	}

	// cong chuoi
	int count = 0;
	for (int i = day; i > 0; i /= 10)
	{
		count++;
	}
	int digit = 0;
	int index = 0;
	// print day, month, year from left to right
	// 12/12/2022
	// result[0] = 1 + '0'
	// result[1] = 2 + '0'
	// result[2] = "/"
	// result[3] = "1"
	// result[4] = "2"
	// result[5] = "/"
	// result[6] = "2"
	// result[7] = "0"
	// result[8] = "2"
	// result[9] = "2"
	for (int i = count, n = day; i > 0; i--)
	{
		// 5346 / 1000 = 5
		// 5346 - (5 * 1000) = 346 -> 346 / 100 = 3
		// 346 - (3 * 100) = 46 -> 46 / 10 = 4
		// 46 - (4 * 10) = 6
		digit = n / pow(10, i - 1);
		n -= digit * pow(10, i - 1);
		result[index] = digit + '0';
		index++;
	}
	result[index] = '/';
	index++;
	count = 0;
	for (int i = month; i > 0; i /= 10)
	{
		count++;
	}
	digit = 0;
	for (int i = count, n = month; i > 0; i--)
	{
		digit = n / pow(10, i - 1);
		n -= digit * pow(10, i - 1);
		result[index] = digit + '0';
		index++;
	}
	result[index] = '/';
	index++;
	count = 0;
	for (int i = year; i > 0; i /= 10)
	{
		count++;
	}
	digit = 0;
	for (int i = count, n = year; i > 0; i--)
	{
		digit = n / pow(10, i - 1);
		n -= digit * pow(10, i - 1);
		result[index] = digit + '0';
		index++;
	}
	result[index] = '\0';
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

	if(month == 4 || month == 6 || month == 9 || month == 11)
	{
		if(day > 30)
		{
			printf("invalid date, %d/%d has 30 days\n", month, year);
			return;
		}
	}
	else if(month == 2 && year % 4 == 0)
	{
		if(day > 29)
		{
			printf("invalid date, %d/%d has 29 days\n", month, year);
			return;
		}
	}
	else if(month == 2 && year % 4 != 0)
	{
		if(day > 28)
		{
			printf("invalid date, %d/%d has 28 days\n", month, year);
			return;
		}
	}

	char *result = previousDay(day, month, year);
	printf("%d/%d/%d -> next day: %s\n", day, month, year, result);
};

int main(void)
{
	runEx();
	return 0;
}