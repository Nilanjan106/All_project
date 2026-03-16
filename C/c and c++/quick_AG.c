#include<stdio.h>

int partion(int arr[],int low,int high) {
	int pivot = arr[high];
	int i = low-1,j;
	for(j = low;j <= high-1;j++) {
		if(arr[j]<pivot) {
			i++;
			int temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
		}
	}
	i++;
	int temp = arr[i];
	arr[i] = arr[high];
	arr[high] = temp;
	return i;
	
}
void quicksort(int arr[],int low,int high) {
	if(low<high) {
		int pidx = partion(arr,low,high);
		quicksort(arr,low,pidx-1);
		quicksort(arr,pidx+1,high);
		
	}
}
int main () {
	int arr[] = {2,6,3,8,5,1};
	int len = sizeof(arr)/sizeof(arr[0]),i;
	printf("%d",len);
	quicksort(arr,0,len-1);
	for(i = 0; i< len;i++) {
		printf("%d",arr[i]);
	}
	return 0;
}
