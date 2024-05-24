#include <stdio.h>
#include <string.h>

int lastChar(char __str[]) {
    return __str[strlen(__str)-1];
}
int  main(void) {

	// char str1[] = "C programming";
	// char str2[100] = "hello world this is called";
	// fgets(name, sizeof(name), stdin);
    // strcpy(str2, str1);

	// strcat(strcat(str2," "),str1);
	// puts(str2);

	char s1[] = "rajesh";
	char s2[] = "a";
	char str[100];
	// fgets(str, sizeof(str), stdin);
    // str[strlen(str)-1]='\0';


	// int ch = strcmp(s1,s2);
	// printf("%d",ch);
    // char lchar=lastChar(str);
	printf("%d",strlwr("hello"));


	printf("\n");
	return 0;
}