#include <stdio.h>

int  main(void) {


	/*
	! pattern  01
	   1 2 3 4 5
	1: *
	2: * *
	3: * * *
	4: * * * *
	5: * * * * *

	i | j
	1 | 1,             j <= 1
	2 | 1, 2,          j <= 2
	3 | 1, 2, 3,       j <= 3
	4 | 1, 2, 3, 4,    j <= 4
	5 | 1, 2, 3, 4, 5  j <= 5
	            == j <= i;
	*/
	int input;
	printf("enter the number: ");
	scanf("%d",&input);
	// for(int i=1; i<=input; i++) {
	// 	for(int j=1; j<=i; j++) {
	// 	   printf("* ");
	// 	}
	//     printf("\n");
	// }

    // printf("\n");
	/*
	! pattern  02
	   1 2 3 4 5
	1: * * * * *
	2: * * * *
	3: * * *
	4: * *
	5: *

	i | j
	1 | 1, 2, 3, 4, 5  j <= 5+1-1
	2 | 1, 2, 3, 4,    j <= 5+1-2
	3 | 1, 2, 3,       j <= 5+1-3
	4 | 1, 2,          j <= 5+1-4
	5 | 1,             j <= 5+1-5
	            == j <= n+1-i;
	*/

	// for(int i=1; i<= input; i++) {
	// 	for(int j=1; j<= input + 1 - i; j++) {
	// 		printf("* ");
	// 	}
	// 	printf("\n");
	// }
    // printf("\n");

	/*
	! pattern  03
	   1 2 3 4 5
	1: * * * * * j <=
	2: *     *
	3: *   *
	4: * *
	5: *

	i | j
	1 | 1, 2, 3, 4, 5  j <= 5+1-1
	2 | 1,       4,    j > 1 && j < 4
	3 | 1,    3,       j > 1 && j < 3
	4 | 1, 2,          j > 1 && j < 2
	5 | 1,             j <= 5+1-5

	*/
	// for(int i=1; i<= input; i++) {
	// 	int min=input+1;
	// 	for(int j=1; j<=(min-i); j++) {
	// 		if (i>1 && i<input-1 && j>1 && j<min-i) {
	// 			printf("  ");
	// 		} else {
	// 			printf("* ");
	// 		}
	// 	}
	// 	printf("\n");
	// }


	/*  Optimized Versions
	! pattern  03
	   1 2 3 4 5
	1: * * * * * j <=
	2: *     *
	3: *   *
	4: * *
	5: *

	i | j
	1 | 1, 2, 3, 4, 5  j <= 5+1-1
	2 | 1,       4,    j > 1 && j < 4
	3 | 1,    3,       j > 1 && j < 3
	4 | 1, 2,          j > 1 && j < 2
	5 | 1,             j <= 5+1-5

	*/
	// for(int row=1; row <= input; row++) {
	//     for(int col=input; col>=row; col--) {
	// 		if(row == 1 || col == input || col == row) {
	// 		    printf("* ");
	// 	    } else {
	//             printf("  ");
	// 		}
	//     }
	//     printf("\n");
	// }
	// printf("\n");
/*
! pattern  05
	  i|j 1 2 3 4 5 6 7 8 9
	   1:        *          j >= 5 && j <= 5
	   2:      *   *        j >= 4 && j <= 6
	   3:    *   *   *      j >= 3 && j <= 7
	   4:  *   *   *   *    j >= 2 && j <= 8
	   5:*   *   *   *   *  j >= 1 && j <= 9
                         j >= n+1-i && j <= n+i-1
					note: n is the user input
*/
	int n = input, i, j, k;
	// for(i=1; i<=n; i++) {
	// 	for(j=1, k=1; j<=(2 * n)-1; j++) {
	// 		if(j <= n+1-i) {
	// 			printf(" ");
	// 		}
	//         if(j>=n+1-i && j<=n+i-1) {
	//             // in c and cpp every non zero integer is true
	// 			// and 0 is false
	// 			// fo not of zero ==> !0 is always true
	// 			if(!(j & 1) && !(i & 1)) printf(" ");
	// 			else if((j & 1) && (i & 1)) printf(" ");
	// 			else printf("*");

	// 		}
	// 	}
	// 	printf("\n");
	// }
    // printf("\n");
	/*
	! pattern  06
		  i|j 1 2 3 4 5 6 7 8 9
		  1:  *   *   *   *   *  j >= 1 && j <= 9
		  2:    *   *   *   *    j >= 2 && j <= 8
		  3:      *   *   *      j >= 3 && j <= 7
		  4:        *   *        j >= 4 && j <= 6
		  5:          *          j >= 5 && j <= 5
	                             j >  i && j <= n+(n+1-i)-1
						note: n is the user input
	*/
	for(i=1; i<=n; i++) {
		for(j=1; j<=(2 * n)-1 ; j++) {
			if(j <=  i-1)  printf(".");
	        if(j>i && j <= n+(n+1-i)-1) {
				// n+(n+1-i)-1
				// hear n+1-i will reverce the i 6, 5, 4, 3, 2, 1
				// n = 6 & 6+6-1= 11
	            // in c and cpp every non zero integer is true
				// and 0 is false
				// fo not of zero ==> !0 is always true
				if(!(j & 1) && !(i & 1)) printf("-");
				else if((j & 1) && (i & 1)) printf("-");
				else printf("*");
			}
		}
		printf("\n");
	}
	/*
	! star pattern 07
    i|j 1 2 3 4 5
	1           *
	2         *   *
	3       *       *
	4      *          *
	5    *             *
	6   * * * * * * * * *
    */
	// for(i=1; i<=n; i++){
	// 	for(j=n; j>=1; j--) {
	//         if(j>i) printf(" ");
	// 		else{
	// 			if(j==i || i == n || j == 1)
	// 			    printf("* ");
	// 			else printf("  ");
	//         }
	// 	}
	// 	printf("\n");
	// }

    // printf("\n");
	// for(i=1; i<=n; i++) {
	// 	for(j=1; j<=i; j++) {
	// 		printf("* ");
	// 	}
	// 	printf("\n");
	// }

	// printf("\n");

	// for(i=1; i<=n; i++) {
	// 	for(j=n; j>=i; j--) {
	// 		printf("%d ",n+1-j);
	// 	}
	// 	printf("\n");
	// }
	// printf("\n");
	// for(i=1; i<=n; i++) {
	// 	for(j=1; j<=i; j++) {
	// 		if(j==1 || j == i || i == n) printf("%d ",j);
	// 		else printf("  ");
	// 	}
	// 	printf("\n");
	// }
	// printf("\n");
	    /*
	! @pattern 8
	* i|j 1 2 3 4 5 6 7 8 9
	* 1           1
	* 2         2 3 2
	* 3       3 4 5 4 3
	* 4     4 5 6 7 6 5 4
	* 5   5 6 7 8 9 8 7 6 5
	     j<= 5 then increment the k else decrement it

		*/

	// for(i=1, k=0; i<=n; i++){
	// 	for(j=1; j<=2*n-1; j++) {
	//         if(j<n+1-i) printf("  ");
	// 		if(j>=n+1-i && j<=n+i-1) {
	// 			(j<=n) ? k++ : k--;
	// 			printf("%d ",k);
	// 		}
	// 	}
	// 	printf("\n");
	// }

     /*
	! @pattern 8
	* i|j 1 2 3 4 5 6 7 8 9
	* 1           1
	* 2         1   2
	* 3       1       3
	* 4     1           4
	* 5   1   2   3   4   5
	     j<= 5 then increment the k else decrement it

		*/

    // for(i=1; i<= n; i++) {
	// 	for(j=n, k=1; j>=1; j--) {

	// 		if(j>i) printf(" ");
	// 		else {
	// 			if(k==1||k==i||i==n) printf("%d ",k);
	// 			else printf("  ");
	// 			k++;
	// 		}
	// 	}
	// 	printf("\n");
	// }
	/*
	! @pattern 9
	* i|j 1 2 3 4 5
	* 1	1 2 3 4 5
	* 2	2     5
	* 3	3   5
	* 4	4 5
	* 5	5

	taking k variable from i and increment it until n;

	// */
	// for(i=1; i<=n; i++) {
	//     for(j=n,k=i; k<=n,j>=i; k++,j--) {
	// 		if(k==i || i==1 || k==n)
	// 		    printf("%d ", k);
	// 			else printf("  ");
	//     }
	// 	printf("\n");
	// }
    // printf("\n");
		/*
	i|j 1 2 3 4 5 6 7 8 9
	1   1
	2   1 2 1
	3   1 2 3 2 1
	4   1 2 3 4 3 2 1
	5   1 2 3 4 5 4 3 2 1

	hear i increments from 1 to n and j increments from 1 to first multiple of n - 1 times
	 and it will run
		*/
	int l;
	// for(i=1,k=0; i<=n;i++,k++) {
	// 	int m = 2*k+1;
	// 	for(l=0,j=1; j<=m;j++) {
	// 		(j<=i)? l++ : l--;
	//         printf("%d ", l);
	// 	}
	// 	printf("\n");
	// }


	// for(i=1,k=0; i<=n;i++,k++) {
	// 	int m = 2*k+1;
	// 	for(l=64,j=1; j<=m;j++) {
	// 		(j<=i)? l++ : l--;
	//         printf("%c ", l);
	// 	}
	// 	printf("\n");
	// }

	/*

	i|j 1 2 3 4 5 6 7 8 9
	1           1
	1         1 2 1
	1       1 2 3 2 1
	1     1 2 3 4 3 2 1
	1   1 2 3 4 5 4 3 2 1
	*/
	// int x;
	// for(i=1,k=0; i<=n;i++,k++) {
	// 	int m = 2*k+1;
	// 	for(x=n; x>i; x--) {
	// 		printf("  ");
	// 	}
	// 	for(l=0,j=1; j<=m;j++) {
	// 		(j<=i)? l++ : l--;
	//         printf("%d ", l);
	// 	}
	// 	printf("\n");
	// }


	printf("\n");
	return 0;
}