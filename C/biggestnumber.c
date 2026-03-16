#include <stdio.h>
main() {
	int x,y,z;
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	if (x>y && x > z) {
		printf("The biggest numnber is %d",x);
	} else if (y>x && y>z){
		printf("The biggest numnber is %d",y);	
	} else {
		printf("The biggest numnber is %d",z);
		
	}
}
