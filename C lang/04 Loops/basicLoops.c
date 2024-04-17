#include <stdio.h>

int main() {

	// printing hello world 5 times
	for (int i = 0; i < 5; i++) {
		printf(" hello world\n");
	}

	// first 10 netural number in c
	printf("\nfirst 10 Netural number's are: \n");
	for (int i = 1; i <= 10;i++) {
		printf("%d\n", i);
	}

	printf("\nfirst 10 Netural number's in reverce order: \n");
	for (int i = 1; i <= 10;i++) {
		printf("%d\n", 10 + 1 - i);
	}


	printf("\nfirst 10 odd Netural number's are: \n");
	for (int i = 1; i <= 20;i++) {
		if (i & 1)
		    printf("%d\n", i);
	}

	printf("\nfirst 10 odd Netural number's in reverce: \n");
	for (int i = 1; i <= 20;i++) {
		if (i & 1)
		    printf("%d\n", 20 - i);
	}

	printf("\nfirst 10 even Netural number's are: \n");
	for (int i = 1; i <= 20;i++) {
		if (!(i & 1))
		    printf("%d\n", i);
	}

	printf("\nfirst 10 even Netural number's in reverce order: \n");
	for (int i = 1; i <= 20;i++) {
		if (!(i & 1))
		    printf("%d\n", 20 + 2 - i);
	}


	printf("\nfirst 10 Netural number's squares: \n");
	for (int i = 1; i <= 10;i++) {
		    printf("%d = %d\n", i, i * i);
	}

	printf("\nfirst 10 Netural number's cubes: \n");
	for (int i = 1; i <= 10;i++) {
		    printf("%d = %d\n", i, i * i * i);
	}


	printf("\ntable of five: \n");
	for (int i = 1; i <= 10;i++) {
		    printf("%d x %d = %d\n", 5, i, 5 * 1);
	}
		printf("\n");
	return 0;
}