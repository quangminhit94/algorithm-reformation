#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void printNumber(int n)
{
	// print character of n from left to right
	// example
	// n = 123 -> 1, 2, 3
	// n = 1234 -> 1, 2, 3, 4
	// n = 3234 -> 3, 2, 3, 4
	int count = 0;
	for (int i = n; i > 0; i /= 10)
	{
		count++;
	}
	int digit = 0;
	for (int i = count; i > 0; i--)
	{
		// 5346 / 1000 = 5
		// 5346 - (5 * 1000) = 346 -> 346 / 100 = 3
		// 346 - (3 * 100) = 46 -> 46 / 10 = 4
		// 46 - (4 * 10) = 6
		digit = n / pow(10, i - 1);
		n -= digit * pow(10, i - 1);
		printf("%d ", digit);
	}

	printf("\n");
}
char *nextDay(int day, int month, int year)
{
	char *result;
	result = (char *)malloc(sizeof(char) * 100);
	if (day == 31 && month == 12)
	{
		day = 1;
		month = 1;
		year++;
	}
	else if (day == 30 && (month == 4 || month == 6 || month == 9 || month == 11))
	{
		day = 1;
		month++;
	}
	else if (day == 29 && month == 2)
	{
		day = 1;
		month++;
	}
	else if (day == 28 && month == 2 && year % 4 != 0)
	{
		day = 1;
		month++;
	}
	else
	{
		day++;
	}

	int count = 0;
	for (int i = day; i > 0; i /= 10)
	{
		count++;
	}
	int digit = 0;
	int index = 0;
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

const char TITLE[] = "Input day, month and year, find next day\n";
void runEx()
{
	printf("%s1/12/2022 -> 2/12/2022 \n", TITLE);

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
	char *result = nextDay(day, month, year);
	printf("%d/%d/%d -> next day: %s\n", day, month, year, result);

	// printNumber(5346);
};

int main(void)
{
	runEx();
	return 0;
}