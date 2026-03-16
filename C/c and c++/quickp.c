#include <stdio.h>

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1,j;
    
    for ( j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            // Swap arr[i] and arr[j]
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
    }
    i++;
    // Swap arr[i] and arr[high] (pivot)
    int temp = arr[i];
    arr[i] = arr[high];
    arr[high] = temp;
    
    return i;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pidx = partition(arr, low, high);
        quickSort(arr, low, pidx - 1);
        quickSort(arr, pidx + 1, high);
    }
}

int main() {
    int arr[] = {2, 6, 3, 4, 8, 9, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]),i;
    
    quickSort(arr, 0, n - 1);
    
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

