#include <stdio.h>

int main() {

	// printf("hello world \n");
	// printf("hello \nworld \n");
	// printf("sankalp kumar \n");
	// printf("\\n");
	// printf("\\r");
	// printf("\nTeachers \nDay");

	int num1, num2;
	// printf("enter two integers to get it's sum: ");
	// scanf("%d%d", &num1, &num2);
	// printf("\n%d+%d=%d", num1, num2, num1 + num2);
	// int n1;
	// printf("Enter the number: ");
	// scanf("%d", &n1);
	// printf("the square of %d is %d\n", n1, n1 * n1);

	// int l, w;
	// printf("enter length and width of rectangel: ");
	// scanf("%d %d", &l, &w);
	// printf(" the area of rectange is %d \n", l * w);

	int r;
	printf("enter the radus of circle: ");
	scanf("%d",&r);
	float radius = 3.1415 * (r * r);
	printf("Area of circle is %d having the radius %f", r, radius);
	printf("\n");
	return 0;
}