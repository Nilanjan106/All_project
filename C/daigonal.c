#include <stdio.h>
int main () {
	int arr[5][5] = {{1,2,3,4,5},{5,6,9,8,7},{6,5,4,78,9},{6,9,2,3,15},{1,6,7,8,2}};
	int i,j;
for(i=0;i<5;i++) {
	for(j=0;j<5;j++) {
		if(i==j) {
			printf("%d",arr[i][i]);
		}
	
}
}
return 0;
}
