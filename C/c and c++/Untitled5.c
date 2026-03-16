#include<stdio.h>
int main() {
	int i,j,t,smallest;
	int arr[]= {1,6,5,9,2,4,3};
	for(i= 0;i<7;i++) {
		smallest = i;
		for(j=i+1;j<7;j++) {
			if(arr[smallest]>arr[j]) {
			smallest = j;
		}
		}
					t = arr[smallest];
			arr[smallest] = arr[i];
			arr[i] = t;
	}
	for(i=0;i<7;i++) {
		printf("%d",arr[i]);
	}
	return 0;
	
}
