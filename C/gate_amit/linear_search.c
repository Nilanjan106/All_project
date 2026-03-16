#include<stdio.h>
void linear_search(int n,int arr[]) {
	int i = 0;
	int length = sizeof(arr)/sizeof(arr[0]);
		for(i = 0;i < length;i++) {
		if(n<=arr[i]) {
			break;
		}
	if(i == n-1 || i < arr[i]) {
		print("Element is not found");
	} else {
		print("Element is  found %d",i);
	}
}
}
int main () {
	int arr[] = {2,3,4,5,6,7};
	linear_search(4,arr);
//	printf("%d",n);
	return 0;
}
