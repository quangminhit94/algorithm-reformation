#include <stdio.h>
#include <math.h>
int sumOfNumber(int n) {
	if(n <= 1) return 1;
	return n + sumOfNumber(n - 1);
}
void printCharacters() {
	unsigned char c;
	int A = 17, Z = 42;
	for(int i = A; i <= Z; ++i) {
		c = i + '0';
		printf("%c ", c);
	}
	printf("\n");
}

const char TITLE[] = "Use for to print A-Z \n";
void runEx()
{
	printf("%s\n", TITLE);
	printCharacters();
};

int main(void)
{
	runEx();
	return 0;
}