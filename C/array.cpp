#include <stdio.h>

int size,arr[10];


main() {
	printf("Enter the size of array\n");
	scanf("%d",&size);
	for (int i = 0; i < size; i++) {
		printf("Enter array elements for position %d:",i+1);
		scanf("%d",&arr[i]);
	}
	int min = arr[0];
	for (int i = 0;i <size;i++) {
		if (arr[i]<min) {
			min = arr[i];
		}
		
		
	}
	printf("\nMinimum element=%d",min);

	
}
