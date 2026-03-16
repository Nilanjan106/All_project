#include<stdio.h>
void decimaltoBinary (int n) {
	int binary[10];
	int i = 0,r,j;
//	scanf("%d",&n);
	while(n>1) {
		r = n%2;
		n=n/2;
		i++;
	}
	for(j=1-i;j>=0;j--) {
		printf("%d",binary[j]);
	}
}
int main () {
	decimaltoBinary(5);
	return 0;
}
