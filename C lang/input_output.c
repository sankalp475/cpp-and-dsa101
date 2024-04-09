#include <stdio.h>

int main() {

	printf("hello world \n");
	printf("hello \nworld \n");
	printf("sankalp kumar \n");
	printf("\\n");
	printf("\\r");
	printf("\nTeachers \nDay");

	int num1, num2;
	printf("enter two integers to get it's sum: ");
	scanf("%d%d", &num1, &num2);
	printf("\n%d+%d=%d", num1, num2, num1 + num2);
	int n1;
	printf("Enter the number: ");
	scanf("%d", &n1);
	printf("the square of %d is %d\n", n1, n1 * n1);

	int l, w;
	printf("enter length and width of rectangel: ");
	scanf("%d %d", &l, &w);
	printf(" the area of rectange is %d \n", l * w);

	int r;
	printf("enter the radus of circle: ");
	scanf("%d",&r);
	float radius = 3.1415 * (r * r);
	printf("Area of circle is %d having the radius %f", r, radius);

	int a, b, c;
	float avg;
	printf("enter three numbers: ");
	scanf("%d%d%d", &a, &b, &c);
	avg = (a + b + c) / 3;
	printf("the average is: %f ", avg);

	int ri;
	float PI = 3.1415, CF;
	printf("enter the radius of circle: ");
	scanf("%d", &ri);
	CF = 2 * (PI * ri);
	printf(" the circumference of circle is: %f", CF);

	int p, rx, t;
	float SI;
	printf("enter principal, rate of intrest and time period: ");
	scanf("%d%d%d", &p, &rx, &t);
	SI = (p * rx * t) / 100;
	printf("the simple intrest is: %f", SI);

	int lx, wx, hx;
	printf("enter length, width and height");
	scanf("%d%d%d", &lx, &wx, &hx);
	printf(" the volume of cuboid is: %d", lx * wx * hx);
	printf("\n");

	float cp, sp, profit;
	printf("enter the cost price and selling price of bnana per deson: ");
	scanf("%f%f", &cp, &sp);
	profit = (sp - cp) * 25 / 12;
	printf(" proft earnd upto selling 25 banana is %.3f\n", profit);

	char cx;
	printf("enter the character: ");
	scanf("%c",&cx);
	printf("the ascii value is: %d", cx);

	int xf;
	printf("enter the ascii code: ");
	scanf("%d", &xf);
	printf("the character is: %c", xf);

	int x, y, z;
	printf("enter three character: ");
	scanf("%d %d %d", &x, &y, &z);

	printf(" the tcharacter for thare respective ascii is:");
	printf("\n %d: %c, %d: %c, %d:, %c", x, (char) x, y, y, z, z);

	int yyyy, mm, dd;
	printf("enter date in the given format: (DD/MM/YYYY):(27/11/2023) \n");
	printf(" ~ ");
	scanf("%d/%d/%d", &dd, &mm, &yyyy);
	printf(" Day - %d, Month - %d, Year - %d", dd, mm, yyyy);


	printf("\n");
	return 0;
}
