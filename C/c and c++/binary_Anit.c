#include<stdio.h>
int binary(int arr[],int low,int high,int item) {
	while(low<=high) {
		int mid = (low+high)/2;
		if(arr[mid] == item) {
			return mid;
		} else if (item < arr[mid]) {
			high = mid-1;
		} else {
			low = mid+1;
		}	
	}
	return -1;
}
int main() {
	int arr[] = {1,2,3,4,5,6};
	int size  = sizeof(arr)/sizeof(arr[0]);
	int num;
	printf("Enter your number : \n");
	scanf("%d",&num);
	int result = binary(arr,0,size-1,num);
	if(result == -1) {
		printf("Your Number is not found");
	} else {
		printf("Your Number is in the position : %d",result+1);
	}
	
	return 0;
}
