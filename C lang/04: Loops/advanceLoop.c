#include <limits.h>
#include <stdint.h>
#include <stdio.h>

int main()
{

	// int nth;
	// long double n_t, f_t = 0, s_t = 1;

	// printf("find nth term in fibonacci series: ");
	// scanf("%d", &nth);

	// if (nth == 0)
	// 	n_t = f_t;

	// for (int i = 2; i <= nth; i++) {
	// 	n_t = f_t + s_t;
	// 	f_t = s_t;
	// 	s_t = n_t;
	// }
	// printf("the nth term is: %.0Lf",n_t);

	// printf("enter two number to find hcf of it. ");
	// int n1, n2;
	// scanf("%d %d", &n1, &n2);
	// for (int i = (n1 > n2) ? n1 : n2; i > 1; i--) {
	// if(!(n1 % i) && !(n2 % i)) {
	// 	printf(" the hcf of %d & %d is %d", n1, n2, i);
	// 	break;
	// } else {
	// 	printf(" there is no hcf of %d & %d", n1, n2);
	// 	break;
	// }
	// }

	// int x1, x2;
	// printf("enter the number to find lcf of it. ");
	// scanf("%d %d", &x1, &x2);
	// for (int i = (x1 > x2) ? x1 : x2; i <= (x1 * x2); i++) {
	// 	if (!(i % x1) && !(i % x2)) {
	// 		printf(" the lcm of %d & %d is %d", x1, x2, i);
	// 		break;
	// 	}
	// }

    // int p, c=0;
	// printf("enter the number to find next prime number: ");
    // scanf("%d",&p);
	// int len = p+1;

	// for(int i=1; i<=lenth; i++) {
    //     for(int j=1; j<=i; j++) {
	// 		if(!(i % j)) {
	// 		    c++;
	// 		}
	// 	}
	// 	if(c==2) {
	// 		printf("%d ",i);
	// 	}
	// 	c=c*0;
	// }


	// while(1) {
    //     for(int j=1; j<=len; j++) {
	// 		if(!(len % j)) {
	// 		    c++;
	// 		}
	// 	}
	// 	if(c==2) {
	// 		printf(" next prime number is %d ",len);
	// 		break;
	// 	}
	// 	c=c*0;
	// 	len=len+1;
	// }
    // int number, val=1, isArmstrong=0;
	// printf("enter the number: ");
	// scanf("%d",&number);
    // int _num_ = number, l=0;
    // while(_num_ != 0) {
	// 	l++;
    //     _num_ = _num_ / 10;
    // }
    // int num = number;
	// while(num != 0) {
	// 	for(int i=l;i>0;i--) {
    //        val = val * (num % 10);
	// 	}
	// 	isArmstrong += val;
	// 	val=val * 0 + 1;
	// 	num = num / 10;
	// }

	// if(isArmstrong == number) {
	// 	printf(" the number %d is armstrong number", number);
	// } else {
	// 	printf(" the number %d is not a armstrong number", number);
	// }






	printf("\n");
	return 0;
}