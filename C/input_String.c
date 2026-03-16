
#include <stdio.h>

int input(char arr[], int n) {
    int i = 0;
    int ch;
    while ((ch = getchar()) != '\n') {
        if (i < n) {
            arr[i++] = ch;
        }
    }
    arr[i] = '\0'; // Ensure the array is null-terminated
    return i;
}
int main() {
    char arr[100];
    int i = input(arr, 100);
    printf("%d %s", i, arr);
    return 0;
}


