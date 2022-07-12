#include <stdio.h>
#include <math.h>
int isAmstrongNumber(int n) {
	int sum = 0;
	int temp = n;
	while (temp > 0) {
		int digit = temp % 10;
		sum += pow(digit, 3);
		temp /= 10;
	}
	if(sum == n) {
		return 1;
	}
	return 0;
}
void findAmstrongNumber(int n)
{
	// find all Amstrong number
	// Amstrong number: sum of each digit's power of n is equal to the number itself
	// 371 -> 7^3 + 3^3 + 1^3 = 371
	// 153 -> 1^3 + 5^3 + 3^3 = 153
	for (int i = 1; i <= n; i++)
	{
		if (isAmstrongNumber(i))
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}

const char TITLE[] = "Print all Amstrong number from\n";
void runEx()
{
	printf("%s[1, 10000000]\n", TITLE);

	int n = 1000000;
	findAmstrongNumber(n);
};

int main(void)
{
	runEx();
	return 0;
}