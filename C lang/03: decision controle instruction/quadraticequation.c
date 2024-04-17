#include <stdio.h>

int main(void) {

	int a, b, c;
	printf("Enter value of a,b,c of quadratic equation ex: (ax^2+bx+c = 0) ");
	scanf("%d %d %d", &a, &b, &c);

	if(
		(b * b - 4 * a * b) > 0
	)  {
		printf("roots are real and Distinct");
	} else if (
		(b * b - 4 * a * b) == 0
	) {
		printf("roots are real and equal");
	} else {
		printf("roots are imaginary");
	}

	printf("\n");
	return 0;
}