#include <stdio.h>
//int *findMean(int arr[],int n);
//main () {
//	int arr[] = {1,2,3,4,5};
//	int n = sizeof(arr)/sizeof(arr[0]);
//	int *ptr = findMean(arr,n);
//	printf("%d",*ptr);
//}
//int *findMean(int arr[],int n) {
//	return &arr[n/2];
//}

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];  
    int *ptr = arr;  
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", ptr + i); 
    }
    printf("The elements in the array are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    return 0;
}

