#include<stdio.h>
void conquer(int arr[],int si,int mid,int ei) {
	int merged[ei-si+1];
	int idx1 = si;
	int idx2 = mid+1;
	int x = 0;
	while(idx1 <= mid && idx2 <= ei) {
		if(arr[idx1] < arr[idx2]) {
			merged[x++] = arr[idx1++];
		} else {
			merged[x++] = arr[idx2++];
		}
	}
	while(idx1 <= mid) {
		merged[x++] = arr[idx1++];
	}
	while(idx2 <= ei) {
		merged[x++] = arr[idx2++];
	}
	int i,j;
	int len = sizeof(merged)/sizeof(merged[0]);
	for(i=0,j=si; i < len;i++,j++) {
		arr[j] = merged[i];
	}
}
void divide(int arr[],int si,int ei) {
	if(si < ei) 
	{
	int mid = si + (ei-si)/2;
	divide(arr,si,mid);
	divide(arr,mid+1,ei);
	conquer(arr,si,mid,ei);
}
}
int main() {
	int arr[] = {1,6,3,4,2,9,8};
		int len = sizeof(arr)/sizeof(arr[0]);
	divide(arr,0,len-1);
	int i;
	for(i = 0;i<len;i++) {
		printf("%d",arr[i]);
	}
	return 0;
}
