#include<stdio.h>
void print(int arr[],int size) {
	int i;
		for(i = 0;i < size; i++) {
		printf("%2d",arr[i]);
	}
}
int main() {
	int arr[] = {1,3,5,2,4,8,6,9};
	int size = sizeof(arr)/sizeof(arr[0]),i,j;
//	for(i = 0; i < size-1;i++) {
//		for(j = i + 1; j < size; j++) {
//			if(arr[i] > arr[j]) {
//				int temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//	Selection Sort

//    for(i = 0; i < size-1;i++) {
//    	int smallest = i;
//    	for(j = i+1; j <size;j++) {
//    		if(arr[smallest] > arr[j]) {
//    			smallest = j;
//			}
//
//		}
//			int temp = arr[smallest];
//			arr[smallest] = arr[i];
//			arr[i] = temp;
//	}

//Insertion Sort
for(i = 1;i < size;i++) {
	int current = arr[i];
	int j = i-1;
	while (j >= 0 && current < arr[j]) {
		arr[j+1] = arr[j];
		j--;
	}
	arr[j+1] = current;
}

	print(arr,size);
	return 0;
}
