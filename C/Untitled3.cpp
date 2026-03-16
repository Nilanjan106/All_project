#include <stdio.h>
#include<string.h>
int fibonacchi(int n) {
	if(n==0){ 
	return 0;
	} else if(n==1) {
		return 1;
	} else {
		return fibonacchi(n-1) + fibonacchi(n-2);
	}
	
}
int main () {
//	char s1[] = "aniket";
//	char s2[] = "Aniket";
//	printf("%d",strcmp(s1,s2));
int n,i;
scanf("%d",&n);

for(i=0;i<n;i++){
	printf("%d",fibonacchi(i));
}


}
