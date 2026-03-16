#include<stdio.h>
int main () {
	int n,i,j,count;
	printf("Enter number\n");
	scanf("%d",&n);
	printf("Prime numbers are \n");
	for(i=1;i<=n;i++) {
		count = 0;
		for(j=2;j<n/2;j++) {
			if(i%j==0) {
				count++;
				break;
			}
		}
			if(count==0) {
		printf("%4d",i);
	}
	}

	
	return 0;
}
