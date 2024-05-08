#include <stdio.h>

float average(int marks[], int n) {
	double average;
	int i, sum=0;
    for(int i=0; i<=n-1; i++) {
		sum += marks[i];
	}
	average = (double) sum/n;
	return average;
}
void scanArray(int marks[], int n) {
	for(int i=1; i<=n; i++) {
		printf("~ scan for array index %d: ",i);
		scanf("%d", &marks[i]);
	}
}
int main() {

	int n;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
    int marks[n];
	scanArray(marks, n);
	double avg = average(marks, n);
    printf("%.2lf", avg);



    printf("\n");
	return 0;
}