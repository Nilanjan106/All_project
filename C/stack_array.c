#include<stdio.h>
#include<stdlib.h>
#define Max 10
	int stack[Max];
	int top = -1;
void push(int data) {
	if(top == Max-1){
		printf("Stack overflow");
		return;
	}
	top++;
	stack[top] = data;
}
int pop() {
	if(top == -1){
		printf("Stack underflow \n");
		return;
	}
	int n =  stack[top];
	top--;
	return n;
}
int peek() {
		if(top == -1){
		printf("Stack underflow \n");
		return;
	}
	return stack[top];
}
void print() {
	int i;
	printf("stack elements are : \n");
	for(i = top;i>=0;i--) {
		printf("%d \n",stack[i]);
	}
}
int main() {
	push(1);
	push(2);
	push(3);
	push(4);
	printf("popped element is %d \n",pop());
	print();
	return 0;
}
