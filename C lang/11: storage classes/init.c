#include <stdio.h>


void f1() {

	int x=0;
	static int y;
    x++;
	y++;
	printf("%d, %d\n",x,y);
}

int main() {

	f1();
    extern int x;
	x = 345;
	printf("\n x=%d", x);

	printf("\n");
	return 0;
}


int x;