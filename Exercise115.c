#include <stdio.h>
#include <math.h>

float averageScores(float math, float literature)
{
	return (math + literature) / 2;
};

const char TITLE[] = "Input name of student, math scores, literature scores\n";
void runEx()
{
	printf("%sFind average of scores\n", TITLE);

	char name[100];
	printf("\nPlease enter an string value of student name: ");
	gets(name);
	// scanf("%s", name);
	
	float math;
	printf("\nPlease enter an float value of math scores: ");
	scanf("%f", &math);
	// check literature is positive
	if (math < 0)
	{
		printf("\nmath scores must be positive\n");
		return;
	}
	else if (math > 10) {
		printf("\nmath scores must be from 1 - 10\n");
		return;
	}

	float literature;
	printf("\nPlease enter an float value of literature scores: ");
	scanf("%f", &literature);
	// check literature is positive
	if (literature < 0)
	{
		printf("\nliterature scores must be positive\n");
		return;
	}
	else if (math > 10) {
		printf("\nliterature scores must be from 1 - 10\n");
		return;
	}

	printf("Student name: %s\nMath scores: %f\nLiterature scores: %f\nAverage scores: %f\n", name, math, literature, averageScores(math, literature));
};

int main(void)
{
	runEx();
	return 0;
}