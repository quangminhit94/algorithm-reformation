#include <stdio.h>
#include <math.h>

const char TITLE[] = "remove a item in an array int\n";
void runEx()
{
	printf("%s[4,19,2,7] -> 19\n", TITLE);

	unsigned int n;
	printf("\nPlease enter an integer value of n: ");
	scanf("%d", &n);

	int arr[100];
	for (int i = 0; i < n; i++) {
		printf("\nPlease enter an integer value of item: ");
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	for(int i=2;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	n--;
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	// for (int i = 0; i < n; i++) {
	// 	if(i == 2) arr[i]
	// }
	// int arr[4] = {4, 19, 2, 7};
	// printf("arrInt: ");
	// for(int i = 0; i <= arr)
};

int main(void)
{
	runEx();
	return 0;
}