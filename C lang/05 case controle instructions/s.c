#include <stdio.h>

int  main(void) {

	int  n;
	scanf("%d", &n);
    switch(n) {
		case 0:
          printf("this is case 0");
		  break;
		case 1:
          printf("this is case 1");
		  break;
		case 2:
          printf("this is case 2");
		  break;
		case 3 ... 9:
          printf("this is case 3,4,5,6,7,8 and 9");
		  break;
	}
	return 0;
}