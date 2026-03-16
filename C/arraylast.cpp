#include <stdio.h>
int size,arr[10];
main () {
	printf("Enter the size of array\n");
	scanf("%d",&size);
	for (int i = 0; i < size; i++) {
		printf("Enter the numbers of array %d",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Enter data in last position\n");
	int data;
	scanf("%d",&data);
	arr[size] = data;
	size++;
	for (int i = 0; i < size; i++) {
		printf("%4d",arr[i]);
	}
}
