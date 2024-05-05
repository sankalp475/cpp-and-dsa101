#include <stdio.h>



void scanArray(int arr[], int size) {
	for(int i=1; i<=size; i++) {
		printf("~ scan for array index %d: ",i);
		scanf("%d", &arr[i]);
	}
}


int getLargets(int arr[], int size) {
	for(int i=1; i<=size; i++) {
		
	}
}



int  main(void) {

	int n;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
    int arr[n];
	scanArray(arr, n);
    int x = getLargets(arr, n);
    printf("%d", x);


	printf("\n");
	return 0;
}