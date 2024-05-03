#include <stdio.h>


int main() {

	char name[30];
	printf("enter the name: ");
	fgets(name, sizeof(name), stdin);
    printf("name: ");
	puts(name);
	printf("\n");
	return 0;
}