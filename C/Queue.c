#include<stdio.h>
#include<stdlib.h>
#define Size 10
int queue[Size],front = -1,rear = -1;
int isEmpty() {
	if(front == -1 || front>rear) {
		return 1;
	} else {
		return 0;
	}
}
int isFull() {
	if(rear == Size-1) {
		return 1;
	} else {
		return 0;
	}
}

void enqueue(int data) {
	if(isFull()) {
		printf("Queue is full");
		return;
	} else {
		if(front == -1) {
			front = 0;
		}
		rear++;
		queue[rear] = data;
	}
}

void display() {
	if(isEmpty()) {
		printf("Queue is empty");
		return;
	} else {
		int i;
		printf(" \nElements are : \n");
		for(i = front;i<=rear;i++) {
			printf("%4d",queue[i]);
		}
	}
}
int dequeue(){
	if(isEmpty()) {
		printf("Queue is empty");
		return;
	}
	int element = queue[front];
	front++;
	if(front>rear) {
		front = rear = -1;
	}
	printf("dequeu element is : \n",queue[front]);
	return element;
}
int main() {
	enqueue(1);
	enqueue(2);
	enqueue(3);
	printf("%d",dequeue());
	display();
	return 0;
}
