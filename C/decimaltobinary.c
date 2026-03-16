#include<stdio.h>
decimaltobinary(int n) {
	int binary[20];
	int index,i;
	if(n==0) {
		printf("0");
		return;
	} else {
		while(n!=0) {
		binary[index] = n%2;
		n = n/2;
		index++;
	}
	for(i=index-1;i>=0;i--) {
		printf("%d",binary[i]);
	}
	}
	
}
int main() {
	int decimal;
	scanf("%d",&decimal);
	decimaltobinary(decimal);
	
	return 0;
}
