#include<stdio.h>
void conquer(int arr[],int si,int mid,int ei) {
	int x = 0;
	int idx1 = si;
	int idx2 = mid+1;
	int merged[ei-si+1];
	while(idx1 <= mid && idx2 <= ei){
		if(arr[idx1] < arr[idx2]){
		merged[x++] = arr[idx1++];
	} else {
		merged[x++] = arr[idx2++];
	}
}

while(idx1 <= mid){
	merged[x++] = arr[idx1++];
}
while(idx2 <= ei){
	merged[x++] = arr[idx2++];
}
int i,j;
for(i = 0,j = si; i < x;i++,j++){
	arr[j] = merged[i];
}
}
void divide(int arr[],int si,int ei){
	int mid = (si+ei)/2;
	if(si<ei){
		divide(arr,si,mid);
		divide(arr,mid+1,ei);
        conquer(arr,si,mid,ei);
	}
}

#include<stdio.h>
void heapify(int arr[],int )
int main(){
	int arr[] = {5,69,3,54,6,2,58,25};
	int n = sizeof(arr)/sizeof(arr[0]);
	divide(arr,0,n-1);
	int i;
	for (i = 0;i<n;i++) {
		printf("%4d",arr[i]);
	}
	return 0;
}
