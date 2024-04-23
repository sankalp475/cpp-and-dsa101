#include <stdio.h>

int  main(void) {

	int year;
	printf("enter the year to check whether leap year or not: ");

	scanf("%d",&year);

	if(!(year % 4)) {
		if(!(year % 100)) {
			if(!(year % 400)) {
				printf("leap year");
			} else {
				printf("not a leap year");
			}
		} else {
			printf("leap year");
		}
	} else {
		printf("not a leap year");
	}

	printf("\n");
	return 0;
}