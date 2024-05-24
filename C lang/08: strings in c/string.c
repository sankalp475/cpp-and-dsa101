#include <stdio.h>

// int strLen(char str[]) {
//     int len;
// 	for(len=0;str[len];len++);
// 	printf("%d",len);
// 	return len;
// }
int main() {

	// char name[100];
	// printf("enter the name: ");
	// fgets(name, sizeof(name), stdin);

    // int x = strLen(name);
	// printf("%d", x);


	char name[100];
	fgets(name, sizeof(name), stdin);
	puts(name);
	// scanf("%s", name);
	// printf("%s", name);

	printf("\n");
	return 0;
}