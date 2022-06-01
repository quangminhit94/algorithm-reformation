#include <stdio.h>
#include <math.h>
int sumOfNumber(int n) {
	if(n <= 1) return 1;
	return n + sumOfNumber(n - 1);
}
int findMinOfNumber() {
	int CONDITION = 10000;
	int sum = 0;
	for(int i = 0; i < CONDITION; i+= 1) {
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