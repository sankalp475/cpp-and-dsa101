#include <stdio.h>

int  main(void) {

	int a, b, c;
	printf("enter three number: ");
	scanf("%d %d %d", &a, &b, &c);
	
    if(a > b && a > c) {
		printf("%d is gratest", a);
	} else if(b > a && b > c) {
		printf("%d is gratest", b);
	} else if(c > a && c > b) {
		printf("%d is gratest", c);
	} else {
		printf(" all are equal");
	}
	printf("\n");
	return 0;
}