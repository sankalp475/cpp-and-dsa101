#include <stdio.h>

int  main(void) {

	// ! Write a program to input a three digit number and display the sum of the digits.
	int num, sum;
	printf("input a three digit number ");
	scanf("%d",&num);
	sum = (num / 10 / 10) + (num / 10 % 10) + (num % 10);
	printf("the sum of the digits. %d is %d", num, sum);

	//! Write a program to find ASCII code of the character *+.
	printf("ascii value ==> '%c'=%d,'%c'=%d", '*', '*', '+', '+');

	//! Write a program to print size of an int, a float, a char and a double type variable
	printf("size of int type variable is %lu\n",sizeof(int));
	printf("size of char type variable is %lu\n",sizeof(char));
	printf("size of float type variable is %lu\n",sizeof(float));
	printf("size of double type variable is %lu\n",sizeof(double));

	//! Write a program to make the last digit of a number stored in a variable as zero. (Example - if x=2345 then make it x=2340)
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);

	n = (n / 10) * 10;
	printf("%d", n);

	//! . Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number. (Example - number=234 and digit=9 then the resulting number is 2349)

	int n1, d1;
	printf("input a number and a digit. ");
	scanf("%d%d", &n1, &d1);
	n1 = n1 * 10 + d1;
	printf("%d", n1);

	//! Assume price of 1 USD is INR 84.23. Write a program to take the amount in INR and convert it into USD.

	float inr, er = 83.41, usd;
	printf("enter amount in inr: ");
	scanf("%f", &inr);
	usd = inr / er;
	printf("%.2f\n", usd);

	//! Write a program to take a three digit number from the user and rotate its digits by one position towards the right.

	int num1;
	printf(" enter three digit number only: ");
	scanf("%d", &num1);

	num1 = (num1 % 10 * 100) + (num1 / 10);
	printf("%d", num1);

	printf("%d\n", 10 > 8 > 4);
	printf("%d\n", 12 > -2);
	printf("%d\n", 3 < 0 && 5 > 0);


	printf("\n");
	return 0;
}