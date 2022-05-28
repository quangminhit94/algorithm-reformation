#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int *divisorOfNumbers(int n)
{
	// divisor of 18 is 1, 2, 3, 6, 9, 18

	int *divisorNumbers;
	divisorNumbers = (int *) malloc(n * sizeof(int));
    
    if (NULL == divisorNumbers)
    {
        printf("ERROR: Out of memory\n");
        return 0;
    }

	int index = 0;
	for (int i = n; i > 0; --i)
	{
		if (n % i == 0)
		{
			divisorNumbers[index] = i;
			// printf("%d ", divisorNumbers[index]);
			index += 1;
		}
		printf("%d \n", i);
	};

	return divisorNumbers;
}

const char TITLE[] = "Find all divisor numbers of a number \n";
void runEx()
{
	printf("size of int is %lu ", sizeof(char));
	printf("%sDivisor of 18 is 1, 2, 3, 6, 9, 18 \n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	int *arrInt;
	arrInt = divisorOfNumbers(n);
	int length = sizeof(arrInt);

    // char *arrChar;
	// arrChar = (char *) malloc (sizeof(char) * (length + 1));

    // for (int i = 0; i < length; i++) {
	// 	arrChar[i] = arrInt[i] + '0';
	// 	arrChar[i + 1] = ' ';
    // }
	// arrChar[length] = '\0';
	printf("\nlength: %d", length);
	for(int i = 0; i < length; i++)  
    {
		printf("\n%d: ", arrInt[i]);
    }  
	// printf("Divisor of %d is %s \n", n, arrChar);
};

int main(void)
{
	runEx();
	return 0;
}