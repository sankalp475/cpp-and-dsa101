#include <stdio.h>

int main(void)
{

	int input;
	scanf("%d", &input);
	/*for (int i = 1; i <= input; i++) {
		for (int j = 1; j <= i; j++) {
			printf("* ");
		}
	printf("\n");
	}*/

	/*for(int i=1; i<= input;i++) {
	  for(int j=1;j <= i; j++) {
		printf("%d ",j);
	  }
	  printf("\n");
	}
	for(int i=input-1; i>=1; i--) {
	  for(int j=i;j>0;j--) {
		printf("%d ",j);
	  }
	  printf("\n");
	}*/
	int starCount = 0;
	for (int i = 1; i <= input;) {
		if (starCount < i) {
			printf("%d ", i);
			starCount++;
		} else {
			printf("\n");
			starCount = 0;
			i++;
		}
	}
	printf("\n");
	return 0;
}
