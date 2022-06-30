#include <stdio.h>
#include <math.h>
double sumOfNumber(int n) {
	double sum = 0;
	for(int i = 1; i <= n; ++i) {
		sum += i;
	}
	return sum;
}
// i = 140 -> sum = 9870 < 10000
// i = 141 -> sum = 10011 > 10000
int findMinOfNumber() {
	int CONDITION = 10000;
	double sum = 0;
	for(int i = 1; i < CONDITION; ++i) {
		sum = sumOfNumber(i);
		if(sum > CONDITION)
			return i;
	}
	return 0;
}

const char TITLE[] = "Find min n of \n";
void runEx()
{
	printf("%sS(n) = 1 + 2 + 3 + ... + n > 10000 \n", TITLE);

	printf("n = %d \n", findMinOfNumber());
};

int main(void)
{
	runEx();
	return 0;
}