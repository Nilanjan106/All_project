#include<stdio.h>
struct employee {
	char name[20];
	int phone;
};
int main () {
	struct employee emp[3];
	int i;
	for(i = 0;i<3;i++) {
		printf("Enter your name :");
		gets(emp[i].name);
		printf("Enter your phone no. :");
		scanf("%d",&emp[i].phone);
		
	}
	
		
			printf("Details of employee %d \n");
		printf("Name : %s \n",emp[0].name);
		printf("Phone no. : %d \n",emp[0].phone);
	
	
	return 0;
	
	
}
