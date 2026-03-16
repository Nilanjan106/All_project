#include <stdio.h>
int *findMean(int arr[],int n);
main () {
	int arr[] = {1,2,3,4,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	int *ptr = findMean(arr,n);
	printf("%d",*ptr);
}
int *findMean(int arr[],int n) {
	return &arr[n/2];
}
