#include<stdio.h>
int main() {
	int arr[] = {5,6,3,8,2,9};
	int size  = sizeof(arr)/sizeof(arr[0]);
	int i,j;
	for(i = 0;i <size-1;i++) {
		int smallest = i;
		for(j = i+1;j < size;j++) {
			if(arr[smallest]>arr[j]) {
				smallest = j;
			}
		}
		int temp = arr[smallest];
		arr[smallest] = arr[i];
		arr[i] = temp;
	}
	for(i = 0;i <size;i++) {
		printf("%2d",arr[i]);
	}
	return 0;
}
