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
	for (int i = size -1; i >= 0;i--) {
		arr[i+1] = arr[i];
	}
	arr[0] = data;
	size++;
	for (int i = 0; i < size; i++) {
		printf("%4d",arr[i]);
	}
}
