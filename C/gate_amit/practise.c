//#include<stdio.h>
//void binary(int arr[],int low,int high,int target) {
//	
//	if(low==high) {
//		if(target == arr[low]) {
//			printf("%d",low);
//			return;
//		} else {
//			printf("Element not found");
//			return;
//		}
//	} else {
//        int mid = (low + high)/2;
//		if(target == arr[mid]) {
//			printf("%d",mid);
//			return;
//		} else if (target < arr[mid]) {
//			binary(arr,low,mid-1,target);
//		} else {
//			binary(arr,mid+1,high,target);
//		}
//	}
//}
//int main() {
//	int arr[] = {1,2,3,4,5,6,7,8,9};
//	binary(arr,0,8,1);
//	return 0; 
//}
#include<stdio.h>
void binary(int arr[],int low ,int high,int target) {
	while(low<=high) {
		int mid = (low + high)/2;
		if(target == arr[mid]) {
			if(low == high || target > arr[mid-1]) {
				printf("%d",mid);
				return;
			} else {
				high = mid-1;
			}
		} else if(target < arr[mid]) {
			high = mid-1;
		} else {
			low = mid+1;
		}
	}
	
}
int main() {
	int arr[] = {1,2,2,2,3,5,6,7};
	binary(arr,0,6,2);
	
	return 0;
}










