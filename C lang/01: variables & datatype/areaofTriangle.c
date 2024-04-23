#include <stdio.h>
#include <math.h>


int  main(void) {

	float a, b, c, sp, area;
	printf("enrter the three sides of triange: ");
	scanf("%f%f%f", &a, &b, &c);

	sp = (a + b + c) / 2;
	area = sqrt(sp * (sp - a) * (sp - b) * (sp - c));

	printf(" the area of triangle is : %f",area);



	printf("\n");
	return 0;
}