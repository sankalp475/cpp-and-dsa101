#include <stdio.h>
#include <string.h>


void countOccurrence(char* str) {
    int count=0, i; 
    int size = strlen(str); 
    int freq[size];


    for(int i=0; i<size; i++) {
        *(freq+i) = -1;
    }

    for(int i=0; i<size; i++) {
        count=1; 
        for(int j=i+1; j<size; j++) {
            if(*(str+i) == *(str+j)) {
                count++;
                *(freq+j) = 0;
            }
        }
        if(*(freq+i) != 0) {
            *(freq+i) = count; 
        }
    }

    for(int i=0; i<size; i++) {
        if(*(freq+i) != 0) {
            printf("%c occers %d times\n",*(str+i), (int)*(freq+i));
        }
    }
}


int main() {
    char str[100];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str)-1] = '\0';
    countOccurrence(str); 

    printf("\n"); 
    return 0; 
}