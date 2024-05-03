#include <stdio.h>

int main() {

	int i,j,n;
	printf("~ ");
	scanf("%d",&n);
	for(i=1; i<=n; i++) {
		for(j=1; j<=(2 * n)-1 ; j++) {
			if(j<=i-1)  printf(" ");
	        if(j>=i && j <= n+(n+1-i)-1) {
				if(
					(j&1)==0 && (i&1)!=0 ||
					(j&1)!=0 && (i&1)==0
				) {
					printf(" ");
				} else {
					printf("*");
				}
			}
		}
		printf("\n");
	}
}