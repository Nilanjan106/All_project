#include <stdio.h>
int size,arr[10];
main () {
	printf("Enter the size of array\n");
	scanf("%d",&size);
	for (int i = 0; i < size; i++) {
		printf("Enter the numbers of array %d",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Enter data in first position\n");
	int data;
	scanf("%d",&data);
	printf ("Enter the position you want to insert data\n");
	int position;
	scanf("%d",&position);
	for (int i = size; i <= position; i-- ) {
		arr[i] = arr[i-1];
	}
	data = arr[i];
	size++;
	for (int i = 0; i < size; i++) {
		printf("%4d",arr[i]);
	}
}
