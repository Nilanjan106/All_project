//#include<stdio.h>
//int conquer(int arr[],int si,int mid,int ei){
//	int x = 0;
//	int merged[ei-si+1];
//	int idx1 = si;
//	int idx2 = mid + 1;
//	
//	while(idx1 <= mid && idx2 <= ei){
//		if(arr[idx1]<arr[idx2]){
//			merged[x++] = arr[idx1++];
//		} else {
//			merged[x++] = arr[idx2++];
//		}
//	}
//	while(idx1 <= mid){
//		merged[x++] = arr[idx1++];
//	}
//	while(idx2 <= ei){
//		merged[x++] = arr[idx2++1];
//	}
//	int i,j;
//	for(i = 0,j = si;i<x;j++,i++){
//		arr[j] = merged[i];
//	}
//}
//void divide(int arr[],int si,int ei){
//	if(si<ei) {
//		int mid = (ei+si)/2;
//		divide(arr,si,mid);
//		divide(arr,mid+1,ei);
//		conquer(arr,si,mid,ei); 
//	}
//}
//int main(){
//	int arr[] = {1,9,8,6,5,7,89,-56};
//	int length = sizeof(arr)/sizeof(arr[0]);
//	divide(arr,0,length-1);
//	int i;
//	for(i = 0;i<length;i++){
//		printf("%4d",arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int partition(int arr[],int low,int high){
//	int pivot = arr[high];
//	int i = low -1,j;
//	for(j = low;j < high;j++){
//		if(arr[j]<pivot){
//			i++;
//			int temp = arr[j];
//			arr[j] = arr[i];
//			arr[i] = temp;
//			
//		}
//	}
//		i++;
//		int temp = arr[i];
//		arr[i] = pivot;
//		arr[high] = temp;
//        return i;
//}
//void quick(int arr[],int low,int high){
//	if(low<high) {
//		int pidx = partition(arr,low,high);
//		quick(arr,low,pidx-1);
//		quick(arr,pidx+1,high);
//			}
//}
//int main(){
//	int arr[] = {1,9,8,6,5,7,89,-56,-968};
//	int length = sizeof(arr)/sizeof(arr[0]);
//	quick(arr,0,length-1);
//	int i;
//	for(i = 0;i<length;i++){
//		printf("%4d",arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//void swap (int *a,int *b){
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void heapify(int arr[],int n,int i){
//	int largest = i;
//	int left = 2*i+1;
//	int right = 2*i + 2;
//	if(left < n && arr[left] > arr[largest]){
//		largest = left;
//	}
//	if(right < n && arr[right] > arr[largest]) {
//		largest = right;
//    }
//    if(largest != i) {
//    	swap(&arr[i],&arr[largest]);
//	}
//	heapify(arr,n,largest);
//}
//	void buildheap(int arr[],int n) {
//		int i;
//		for(i = (n/2)-1;i>=0;i--){
//			heapify(arr,n,i);
//		}
//	}
//	void heapsort(int arr[],int n){
//		buildheap(arr,n);
//		int i;
//		for(i = n-1;i > 0;i--){
//			swap(&arr[0],&arr[i]);
//			heapify(arr,i,0);
//		}
//	}
//	void printarr(int arr[],int n){
//		int i = 0;
//		for(i = 0; i < n; i++) {
//			printf("%4d",arr[i]);
//		}
//	}
//int main(){
//	int arr[] = {569,45,8,63,21,3,4,5,1,-56};
//	int length = sizeof(arr)/sizeof(arr[0]);
//	heapsort(arr,length);
//	printarr(arr,length);
//	return 0;
//}

//#include<stdio.h>
//
//void swap(int *a, int *b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//void heapify(int arr[], int n, int i) {
//    int largest = i;
//    int left = 2 * i + 1;
//    int right = 2 * i + 2;
//
//    if (left < n && arr[left] > arr[largest]) {
//        largest = left;
//    }
//    if (right < n && arr[right] > arr[largest]) {
//        largest = right;
//    }
//
//    if (largest != i) {
//        swap(&arr[i], &arr[largest]);
//        heapify(arr, n, largest); // Fix infinite recursion
//    }
//}
//
//void buildheap(int arr[], int n) {
//	int i;
//    for (i = (n / 2) - 1; i >= 0; i--) {
//        heapify(arr, n, i);
//    }
//}
//
//void heapsort(int arr[], int n) {
//    buildheap(arr, n);
//    int i;
//    for ( i = n - 1; i > 0; i--) {
//        swap(&arr[0], &arr[i]);
//        heapify(arr, i, 0);
//    }
//}
//
//void printarr(int arr[], int n) {
//	int i;
//    for ( i = 0; i < n; i++) {
//        printf("%4d", arr[i]);
//    }
//    printf("\n");
//}
//
//int main() {
//    int arr[] = {569, 45, 8, 63, 21, 3, 4, 5, 1, -56,-963};
//    int length = sizeof(arr) / sizeof(arr[0]);
//    heapsort(arr, length);
//    printarr(arr, length);
//    return 0;
//}

#include<stdio.h>

//typedef struct node {
//	int data;
//	struct node *next;
//	struct node *previous;
//} Node;
//Node *creation(int data){
//	Node *newnode = malloc(sizeof(data));
//	newnode->data = data;
//	newnode->next = NULL;
//	newnode->previous = NULL;
//	return newnode;
//}
//void insert(Node **head,int data) {
//	Node *newNode = creation(data);
//	if(head == NULL) {
//		head = newNode;
//		
//	}
//	newNode->next = *head;
//	*head = newNode;
//}
//void deletion(Node **head){
//	if(head == NULL) {
//		printf("List is empty");
//	}
//	Node last = *head;
//	while(last->next != NULL){
//		last = last->next;
//	}
//	last
//}
//void print(Node *head) {
//	if(head == NULL) {
//		printf("List is empty");
//	}
//	while(head != NULL){
//		printf("%4d-->",head->data);
//		head = head->next;
//	}
//	printf("NULL \n");
//}
//
//int main(){
//	Node *head = NULL;
//	insert(&head,10);
//	print(head);
//	return 0;
//}





































































































































































































































































































































