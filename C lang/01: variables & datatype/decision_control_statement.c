#include <stdio.h>

int  main(void) {

	// ! Write a program to check whether a given number is positive or non positive.
	int n;
	printf(" Enter the number to check whether a given number is positive or non positive. ");
	scanf("%d", &n);
	if(n >= 0) {
		printf("the number %d is positve", n);
	} else {
		printf("the number %d is non positive.", n);
	}

	//! Write a program to check whether a given number is divisible by 5 or not

	int x;
	printf("enter the number to to check whether a given number is divisible by 5 or not ");
	scanf("%d", &x);
	if(x % 5 == 0) {
		printf("this number %d is divisible by %d", x, 5);
	} else {
		printf("this number %d is not divisible by %d", x, 5);
	}

	//! Write a program to check whether a given number is an even number or an odd number.

	int num;
	printf("Enter the number: ");
	scanf("%d", &num);
	if(num % 2 == 0) {
		printf("number is even");
	} else {
		printf("number is odd");
	}

	//! Write a program to check whether a given number is an even number or an odd number without using % operator.
	int input;
	printf("enter the number: ");
	scanf("%d", &input);
	if((input & 1) == 0) {
    	printf("number is even");
	} else {
		printf("number is odd");
	}


	//! Write a program to check whether a given number is a three digit number or not.
	int gn;
	printf("Enter number: ");
	scanf("%d", &gn);
	if(gn > 99 && gn <= 999) {
		printf("given number is a three digit number");
	} else {
		printf("given number is not a three digit number");
	}

	//! Write a program to print greater between two numbers. Print one number if both are the same.
	int n1, n2;
	printf("enter two number: ");
	scanf("%d%d", &n1, &n2);

	if(n1 == n2) {
		printf("%d", (n1, n2));
	} 

	printf("\n");
	return 0;
}