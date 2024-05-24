#include <stdio.h>




void scanArray(int arr[], int size) {
	for(int i=0; i<=size-1; i++) {
		printf("~ array index [%d]: ",i);
		scanf("%d", &arr[i]);
	}
}


// arr[1,4,5,0,45,6]
int getMax(int arr[], int size) {
	int k=0, max=arr[0];
    for(int i=k+1; i<=size-1;i++) {
        if(max<arr[i]) {
			max=arr[i];
			k=i;
		}
    }
    return max;
}
int getMin(int arr[], int size) {
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
void sort(int arr[], int arrSize) {
	int k=arrSize-1,r=1,t,i;
	for(i=0; i<=k-r; i++) {
        if(arr[i] > arr[i+1]) {
			t=arr[i+1];
			arr[i+1] = arr[i];
			arr[i] = t;
		}
		if(i==k-r) {
			++r;
			i=0;
		}
	}
	for(i=0; i<=k; i++) {
        printf("%d ", arr[i]);
	}
}


int Smax(int arr[], int size) {
    int max, smax;
	if(arr[0] > arr[1]){
		max=arr[0];
		smax=arr[1];
	} else {
		max=arr[1];
		smax=arr[0];
	}
    for(int i=2; i<=size-1;i++) {
		if(arr[i]>max) {
			smax=max;
			max=arr[i];
		} else {
			if(arr[i]>smax) {
				smax=arr[i];
			}
		}
    }
	return smax;
}



int Smin(int arr[], int size) {
    int min, smin;
	if(arr[0] < arr[1]){
		min=arr[0];
		smin=arr[1];
	} else {
		min=arr[1];
		smin=arr[0];
	}
    for(int i=2; i<=size-1;i++) {
		if(arr[i]>min) {
			if(arr[i]<smin) {
				smin=arr[i];
			}
		} else {
			smin=min;
			min=arr[i];
		}
    }

	return smin;
}
void rotate(int arr[], int r, int d, int size) {
    int a[size];
	for(int i=0; i<=size-1;i++) {
        if(d==0) {
			if((i-r)<0) {
                a[size+(i-r)] = arr[i];
			} else {
				a[i-r] = arr[i];
			}
		} else {
			if((i+r)>=size) {
				a[(i+r)-size] = arr[i];
			} else {
				a[i+r] = arr[i];
			}
		}
	}
	for(int i=0; i<=size-1;i++) {
		printf("%d ", a[i]);
	}
}
int  main(void) {

	int n;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
    int arr[n];
	scanArray(arr, n);
	// int n0,d;
	// printf("number of rotation u want: ");
	// scanf("%d",&n0);
	// printf("direction (d) in which u want to rotate: \n");
	// printf("0 for left rotation and 1 for right rotation: ");
	// scanf("%d",&d);

    // rotate(arr, n0, d, n);

    // int x = getMax(arr, n);
    // printf("%d", x);

	// int y = getMin(arr, n);
	// printf("%d", y);

	// sort(arr, n);

	// int sx = Smin(arr,n);
    // printf("%d",sx);

    printf("\n");
	return 0;
}