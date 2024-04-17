#include <stdio.h>

int main() {


	// checking the number is even or odd using bitwize

	int n;
	printf("enter the number: ");
	scanf("%d", &n);

	if((n & 1) == 0) {
		printf("even");
	} else {
		printf("odd");
	}
	
	printf("\n");
	return 0;
}