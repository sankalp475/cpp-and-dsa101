#include <stdio.h>
int revnum(int n) {
	int nmod = n%10;
	int nd = n/10;

	if(n>0) {
		printf("%d", nmod);
		revnum(nd);
	}
}
int  main(void) {

	int n;
	printf("enter the number to reverce it. ");
	printf("~ ");
	scanf("%d", &n);
	int r = revnum(n);

	printf("\n");
	return 0;
}