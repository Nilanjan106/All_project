#include <stdio.h>
main () {
	int arr[] = {5,7,1,9,8};
	int i,j,smallest,t;
	for (i = 0; i<4;i++) {
		int smallest = i;
		for (j=i+1;j < 5;j++) {
			if (arr[smallest] > arr[j]) {
			smallest = j;
			}
		}
		t = arr[smallest];
		arr[smallest] = arr[i];
		arr[i]= t;
	}
		for (i = 0;i <5;i++) {
		printf("%d",arr[i]);
	}
}
		
		
