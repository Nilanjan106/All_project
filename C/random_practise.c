//#include<stdio.h>
//#include<stdlib.h>
//void conquer(int arr[],int si,int mid,int ei){
//	int merged[ei-si+1];
//	int idx1 = si;
//	int idx2 = mid+1;
//	int x = 0;
//	while(idx1<=mid && idx2 <= ei) {
//		if(arr[idx1]<arr[idx2]) {
//			merged[x++] = arr[idx1++];
// 		} else {
// 			merged[x++] = arr[idx2++];
//		 }
//	}
//	while(idx1<=mid) {
//		merged[x++] = arr[idx1++];
//	}
//	while(idx2<= ei){
//		merged[x++] = arr[idx2++];
//	}
//	int i,j;
////	int length = sizeof(merged)/sizeof(merged[0]);
//	for(i = 0,j = si;i<x;j++,i++){
//		arr[j] = merged[i];
//	}
//}
//void divide(int arr[],int si,int ei) {
//	if(si<ei) {
//	int mid = si + (ei - si) / 2; 
//		divide(arr,si,mid);
//		divide(arr,mid+1,ei);
//		conquer(arr,si,mid,ei);
//	}
//}
//int main() {
//	int arr[] = {1,6,3,8,9,50,46};
//	int n = sizeof(arr) / sizeof(arr[0]);
//	divide(arr,0,n-1);
//	int i;
//	for(i = 0;i<n;i++) {
//		printf("%4d",arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int partition(int arr[],int low,int high){
//	int pivot = arr[high];
//	int i = low-1,j;
//	for(j = low;j<high;j++) {
//		if(arr[j]<pivot){
//			i++;
//			int temp = arr[j];
//			arr[j] = arr[i];
//			arr[i] = temp;
//		}
//	}
//	i++;
//	int temp = arr[i];
//	arr[i] = pivot;
//	arr[high] = temp;
//	return i;	
//}
//void quick(int arr[],int low,int high){
//	if(low<high) {
//		int pidx = partition(arr,low,high);
//		quick(arr,low,pidx-1);
//		quick(arr,pidx+1,high);
//	}
//}
//int main() {
//	int arr[] = {1,6,3,8,-1,-122,9,50,46};
//	int n = sizeof(arr) / sizeof(arr[0]);
//	quick(arr,0,n-1);
//	int i;
//	for(i = 0;i<n;i++) {
//		printf("%4d",arr[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//
//// Function to swap two elements
//void swap(int *a, int *b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//// To heapify a subtree rooted at index i
//void heapify(int arr[], int n, int i) {
//    int largest = i;        // Initialize largest as root
//    int left = 2 * i + 1;   // Left child
//    int right = 2 * i + 2;  // Right child
//
//    // If left child is larger than root
//    if (left < n && arr[left] > arr[largest])
//        largest = left;
//
//    // If right child is larger than largest so far
//    if (right < n && arr[right] > arr[largest])
//        largest = right;
//
//    // If largest is not root
//    if (largest != i) {
//        swap(&arr[i], &arr[largest]);
//
//        // Recursively heapify the affected subtree
//        heapify(arr, n, largest);
//    }
//}
//
//// Function to build the heap (rearrange the array)
//void buildHeap(int arr[], int n) {
//	int i;
//    // Build a max heap (starting from last non-leaf node)
//    for ( i = (n / 2) - 1; i >= 0; i--)
//        heapify(arr, n, i);
//}
//
//// Function to perform heap sort
//void heapSort(int arr[], int n) {
//    // Step 1: Build the heap
//    buildHeap(arr, n);
//    int i;
//
//    // Step 2: One by one extract elements from heap
//    for ( i = n - 1; i > 0; i--) {
//        // Move current root to end (extract the maximum element)
//        swap(&arr[0], &arr[i]);
//
//        // Call heapify on the reduced heap
//        heapify(arr, i, 0);
//    }
//}
//
//// Utility function to print the array
//void printArray(int arr[], int n) {
//	int i;
//    for ( i = 0; i < n; i++)
//        printf("%4d", arr[i]);
//    printf("\n");
//}
//
//int main() {
//    int arr[] = {1, 6, 3, 8, -1, -122, 9, 50, 46};
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    heapSort(arr, n);
//
//    printf("Sorted array: \n");
//    printArray(arr, n);
//
//    return 0;
//}


