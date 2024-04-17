#include <stdio.h>

int main(void)
{

	// //! Write a program to calculate size of a character constant.
	printf("%lu\n", sizeof(char));

	// //! Write a program to calculate size of a real constant.
	printf("%lu\n", sizeof(float));

	// //!Write a program with one char type variable. Assign 'A' in the variable. Now change the value of variable from 'A' to 'B' using increment operator.
	char ch = 'A';
	printf("%c", ++ch);

	//! Write a program to print unit digit of a given number
	int x = 123345;
	printf("the unit digit of %d is %d\n", x, x % 10);

	//! Write a program to print a given number without its last digit.
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);
	printf("the number %d without last digit is %d\n", num, num / 10);

	// !Write a program to swap values of two int variables
	int iv1, iv2, temp;
	printf("Enter the two integer number: ");
	scanf("%d%d", &iv1, &iv2);
	temp = iv1;
	iv1 = iv2;
	iv2 = temp;
	printf("the value of iv1 is %d and iv2 is %d\n", iv1, iv2);

	//! Write a program to swap values of two int variables without using a third variable.
	int var1, var2;
	printf("Enter two number: ");
	scanf("%d%d", &var1, &var2);
	var2 = var1 + var2;
	var1 = var2 - var1;
	var2 = var2 - var1;
	printf("the value of var1 is %d, var2 is %d\n", var1, var2);

	//! Write a program to swap values of two int variables without using third variable and without using +, -operators.
	int varx, vary;
	printf("Enter two number: ");
	scanf("%d%d", &varx, &vary);
	vary = varx * vary;
	varx = vary / varx;
	vary = vary / varx;
	printf("the value of varx is %d, vary is %d\n", varx, vary);

	//! Write a program to swap values of two int variables without using third variable and arithmetic operators.

	int v1, v2;
	printf("enter two number: ");
	scanf("%d%d", &v1, &v2);
	v2 = (v1 = v1 ^ v2) ^ v2;
	v1 = v1 ^ v2;
	printf("the value of v1 is %d, v2 is %d\n", v1, v2);

	//! Write a program to swap values of two int variables in single line arithmetic expression.
	int s1, s2;
	printf("Enter two number: ");
	scanf("%d%d", &s1, &s2);
	s1 = (s2 = s1 + s2) - s1;
	s2 = s2 - s1;
	printf("the value of s1 is %d, s2 is %d\n", s1, s2);

	printf("\n");
	return 0;
}
