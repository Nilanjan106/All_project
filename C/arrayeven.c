#include<stdio.h>
int main() {
	int arr [] = {1,2,3,4,5,6,7,8,9};
	int i,sum=0;
	int length = sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<length;i++) {
		if(i%2==0) {
			sum = sum +i;
		}
	}
	printf("%d",sum);
	return 0;
}
