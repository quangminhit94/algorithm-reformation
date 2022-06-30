#include <stdio.h>
#include <math.h>

void printCharacters() {
	unsigned char c;
	int A = 17, Z = 42;
	for(int i = A; i <= Z; ++i) {
		c = i + '0';
		printf("%c ", c);
	}
	printf("\n");
}

const char TITLE[] = "Use for loop to print A-Z \n";
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