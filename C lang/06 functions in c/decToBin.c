#include <stdio.h>

void DecToBin(int n) {
    if(n==1) {
		printf("%d",n);
		return;
	}
	DecToBin(n/2);
	printf("%d",n%2);
}
int  main(void) {

    int n;
	printf("~ Enter the decimal number to find it's binary \n");
	printf("~ ");
	scanf("%d", &n);
    DecToBin(n);

	printf("\n");
	return 0;
}