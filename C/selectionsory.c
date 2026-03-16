#include <stdio.h>
main () {
	int arr[] = {5,7,1,9,8};
	int i,j,current;
	for (i = 1; i < 5;i++) {
	   current = arr[i];
	   j = i-1;
	   while (j >=0 && current < arr[j]) {
	   	arr[j+1] = arr[j];
	   	j--;
	   }
	   arr[j+1] = current;
	}
	for (i = 0;i <5;i++) {
		printf("%d",arr[i]);
	}
}
