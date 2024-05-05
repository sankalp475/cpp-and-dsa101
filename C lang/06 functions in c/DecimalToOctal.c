#include <stdio.h>
#include <math.h>


void decimalToOctal(int n) {
    if(n>0) {
		decimalToOctal(n/8);
		printf("%d",n%8);
	}
}

int  main(void) {

	int n;
    printf("enter the decimal to convert it to octal: ");
    printf("~ ");
	scanf("%d",&n);
	decimalToOctal(n);

	printf("\n");
	return 0;
}