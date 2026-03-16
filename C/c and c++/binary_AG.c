//#include<stdio.h>
//int binary(int arr[],int low,int high,int item) {
//	int mid = (low+high)/2;
//	while(low<=high) {
//	if(arr[mid] == item) {
//		return mid;
//}
//	else if(arr[mid]  > item) {
//		high = mid - 1;
//	} else {
//		 low = mid + 1;
//	}
//}
//	return -1;
//	}
//int main () {
//	int arr1[] = {1,2,3,4,5,6,7};
//    int size1 = sizeof(arr1)/sizeof(arr1[0]);
//    int result = binary(arr1,0,size1-1,5);
//    printf("%d",result);
//	return 0;
//}

#include <stdio.h>

int binary(int arr[], int low, int high, int item) {
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == item) {
            return mid;
        } else if (arr[mid] > item) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6, 7};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int result = binary(arr1, 0, size1 - 1, 5);
    printf("%d", result);
    return 0;
}

