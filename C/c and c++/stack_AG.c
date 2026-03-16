#include<stdio.h>
#define MAX 100
int stack[MAX];
int top = -1;
void push(int value) {
	if(top == MAX-1) {
		printf("Stack is overflow");
	} else {
		top++;
		stack[top] = value;
	}
}
void pop() {
	if(top == -1) {
		printf("stack is underflow");
	} else {
		printf("popped element is %d : \n",stack[top]);
		top--;
	}
}
void peek() {
     	if(top == -1) {
		printf("stack is empty");
	} else {
		printf("peeked element is %d : \n",stack[top]);
	}
}
void display () {
	if(top == -1) {
		printf("stack is empty");
	} else {
		printf("stack element are : \n");
		int i;
		for(i = top;i >=0;i--) {
			printf("%2d",stack[i]);
		}
	}
}
int main() {
       push(5);
       push(6);
       push(7);
       push(8);
       peek();
       pop();
       display();
	
	return 0;
}
