#include <stdio.h>
#include <math.h>

int sumToN(int n){
    int sum=0;
	if(n>0) {
       sum = n + sumToN(n-1);
	   return sum;
	}
}
int sumToOddN(int n){
    int sum=0;
	int m=n-1;
	int fNodd = 2*m+1;
	if(n>0) {
        sum = fNodd + sumToOddN(m);
		return sum;
	}
	return sum;
}
void itoN(int n) {
	if(n>0) {
		printf("%d\n",n);
		itoN(--n);
	}
}

double fact(int n) {
	if(n == 0 || n == 1) {
		return 1;
	}
	return n * fact(n-1);
}

double fib(int n) {
	if(n==0) return 0;
	if(n==1) return 1;
	return fib(n-2) + fib(n-1);
}

int digitCount(int n) {
    int digit=0;
	if(n>0) {
		digit += digitCount(n/10);
		return ++digit;
	}
	return digit;
}


double power(double base, double expo) {
    double result;
	if(expo>0) {
		result = base * power(base, --expo);
		return result;
	}
	else if(expo<0) {
		result = power(base,-(expo));
		return 1/result;
	}
	if(expo==0) return 1;
}






int  main(void) {

	int n;
	// printf("~ ");
	// scanf("%d", &n);
    // sum of first n natural number;
	// int r = sumToN(n);
    // printf("%d", r);

	// sum of first odd n natural number;
    // int x = sumToOddN(n);

	// double x = fact(n);
    // printf("%lf", x);
    // double x = fib(n);
    // printf("%.0lf", x);

	// int v = power(n);
	int num,exponent;
	scanf("%d%d",&num,&exponent);
	printf("%lf\n", power(num,exponent));
	// printf("%lf\n",pow(5,2));
    // printf("%lf", (double) (1.0/2.0));


	printf("\n");
	return 0;





}