#include <stdio.h>

int  main(void) {

	int year;
	printf("enter the year to check wether leep year or not: ");

	scanf("%d",&year);

	if(!(year % 4) || !(year % 400)) {
		printf("leep year");
	} else {
		printf("not a leep year");
	}

	printf("\n");
	return 0;
}