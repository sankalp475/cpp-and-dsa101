#include <stdio.h>



void swap(int *arg1, int *arg2) {
	*arg1 = (*arg2 = *arg1 + *arg2) - *arg1;
	*arg2 = *arg2 - *arg1;
}

void sort(int *ptr, int size) {
    
	for(int i=0; i<size; i++) {
		
	}
}

int main() {

//    int a,b;
//    scanf("%d%d",&a,&b);
//    swap(&a, &b);
//    printf("%d %d",a,b);

    // int x[5] = {1,2,3,4,5}, *p = &x[0];
	// printf("%d",*(p));
    // int a[4] = {1,5,3,4}, b, c;
	// int *p[5];
	// p[0] = &a[0];
	// printf("%d", *(p[0]+1));

	// int *p;
	// printf("%d\n",*p);
    // *p = 304;
	// printf("%d\n",*p);

    printf("\n");
	return 0;
}