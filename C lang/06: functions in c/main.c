#include <stdio.h>


int sumOfN(int n) {
    int sumtoN = 0;
	for(int i=1; i<=n; i++) {
       sumtoN += i;
	}
	return sumtoN;
}
int main() {

   int x;
   printf("~ ");
   scanf("%d", &x);
   printf("%d", sumOfN(x));

   printf("\n");
   return 0;
}