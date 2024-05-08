#include <stdio.h>

int main()
{

	int n, sum = 0;
	printf("Enter the number to print sum of first N netural numbers: ");
	scanf("%d", &n);

	int i = 1;
	while (i <= n) {
		sum = sum + i;
		i++;
	}
	printf(" the sum to %d is %d", n, sum);

	int N, sumToeven = 0;
	printf("\nEnter the number to print sum of first N even netural numbers: ");
	scanf("%d", &N);
	int x = 1;
	while (x <= N) {
		sumToeven += (x + x);
		x++;
	}
	printf(" the sum is %d", sumToeven);

	int num, sumToodd = 0;
	printf("\nEnter the number to print sum of first N odd netural numbers: ");
	scanf("%d", &num);
	int y = 1;
	while (y <= num) {
		sumToodd += (2 * y + 1);
		y++;
	}
	printf(" the sum is %d", sumToodd);

	int max, sumTosqrt = 0;
	printf("\nEnter the number to print sum of square of first N natural number : ");
	scanf("%d", &max);
	int m = 1;
	while (m <= max) {
		sumTosqrt += (m * m);
		m++;
	}
	printf(" the sum is %d", sumTosqrt);

	int n1, sumTocubert = 0;
	printf("\nEnter the number to print sum of square of first N natural number : ");
	scanf("%d", &n1);
	int q = 1;
	while (q <= n1) {
		sumTocubert += (q * q * q);
		q++;
	}
	printf(" the sum is %d", sumTocubert);

	int n2;
	printf("\nenter the number to find factorial: ");
	scanf("%d", &n2);
	long double fact = 1.0;
	int q1 = n2, k = 1;
	while (q1 >= 1) {
		fact = fact * q1;
		q1--;
		k++;
	}
	printf(" factorial of %d is %.0Lf", n2, fact);

	int number, count = 0;
	printf("\nEnter the number to find digits in given number: ");
	scanf("%d", &number);
	int t = number;
	while (t > 0) {
		count++;
		t = t / 10;
	}
	printf("%d\n", count);

	int num1, isPrime = 0;
	printf("checking for prime number: ");
	scanf("%d", &num1);

	for (int i = 1; i <= num1; i++) {
		if (!(num1 % i))
			isPrime++;
	}
	(isPrime == 2) ? printf(" %d is a prime number", num1) : printf(" %d is not a prime number", num1);
	printf("\n");
	return 0;
}