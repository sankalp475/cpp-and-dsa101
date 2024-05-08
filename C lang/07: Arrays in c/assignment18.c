#include <stdio.h>




void scanArray(int arr[], int size) {
	for(int i=0; i<=size-1; i++) {
		printf("~ scan for array index %d: ",i);
		scanf("%d", &arr[i]);
	}
}


// arr[1,4,5,0,45,6]
int getLargets(int arr[], int size) {
	int k=0, max=arr[0];
	for(int i=0; i<=size-1; i++) {
        for(int j=k+1; j<= size-1; j++) {
			if(max<arr[j]) {
				max = arr[j];
				k=j;
				i=k;
			}
		}
	}
    return max;
}
int getSmalest(int arr[], int size) {
    int k=0, min=arr[0];
	int i;
	for(i=k+1; i<= size-1; i++) {
		if(min>arr[i]) {
           min=arr[i];
		   k=i;
		}
	}
	return min;
}
void shortArray(int arr[], int n) {
    int arr1[n], arr2[n];
	int i;
	for(i=0;arr[i];i++) {
		
	}
}
int  main(void) {

	int n;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
    int arr[n];
	scanArray(arr, n);

    // int x = getLargets(arr, n);
    // printf("%d", x);

	// int y = getSmalest(arr, n);
	// printf("%d", y);





	printf("\n");
	return 0;
}