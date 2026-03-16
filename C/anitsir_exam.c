//#include<stdio.h>
//#include<stdlib.h>
//#define max 10
//typedef struct Node {
//	int data,size;
//	struct Node *next;
//}node;
//node* creation(int data){
//	int size = 0;
//	node* newNode = (node*)malloc(sizeof(node));
//	newNode->size = 0;
//	newNode->data = data;
//	newNode->next = NULL;
//	size++;
//	return newNode;
//}
//void push(node **head,int data){
//	int size;
//	if(size == max){
//		printf("Stack Overflow \n");
//		return;
//	}
//	node* newNode = creation(data);
//	if(*head == NULL){
//	*head = newNode;
//	return;
//}
//    newNode->next = *head;
//    *head = newNode;
//}
//int pop(node **head){
//	int size;
//		if(*head == NULL){
//		printf("Stack is underflow");
//	}
//	node* temp = *head;
//	*head = (*head)->next;
//	return temp->data;
//	size--;
//}
//void print(node **head){
//	if(head == NULL){
//		printf("Stack is empty");
//	}
//	node* temp = *head;
//	while(temp != NULL){
//		printf("%d --> ",temp->data);
//		temp = temp->next;
//	}
//	printf("NULL \n");
//}
//
//
//int main(){
//	node *root = NULL;
//	push(&root,10);
//	push(&root,20);
//	push(&root,30);
//	push(&root,40);
//	push(&root,10);
//	push(&root,20);
//	push(&root,30);
//	push(&root,40);
//	push(&root,10);
//	push(&root,20);
//	push(&root,30);
//	push(&root,40);
//	print(&root);
//	getsize();
////	int result = pop(&root);
////	int result2 = pop(&root);
////	int result3 = pop(&root);
////	int result4 = pop(&root);
////	int result5 = pop(&root);
////	printf("Popped element is : %d\n",result2);
////	print(&root);
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#define max 10

typedef struct Node {
	int data;
	struct Node *next;
}node;

int size = 0;

// Function to create a new node
node* creation(int data){
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

// Function to push an element into the stack
void push(node **head, int data){
	if(size == max){
		printf("Stack Overflow \n");
		return;
	}
	node* newNode = creation(data);
	if(*head == NULL){
		*head = newNode;
	} else {
		newNode->next = *head;
		*head = newNode;
	}
	size++; // Increment size after push
}

// Function to pop an element from the stack
int pop(node **head){
	if(*head == NULL){
		printf("Stack Underflow \n");
		return -1; // Indicate error if stack is empty
	}
	node* temp = *head;
	*head = (*head)->next;
	int poppedValue = temp->data;
	free(temp);
	size--; // Decrement size after pop
	return poppedValue;
}

// Function to print the stack
void print(node **head){
	if(*head == NULL){
		printf("Stack is empty\n");
		return;
	}
	node* temp = *head;
	while(temp != NULL){
		printf("%d --> ", temp->data);
		temp = temp->next;
	}
	printf("NULL \n");
}

int main(){
	node *root = NULL;
	
	// Pushing elements to the stack
	push(&root, 10);
	push(&root, 20);
	push(&root, 30);
	push(&root, 40);
	push(&root, 50);
	push(&root, 60);
	push(&root, 70);
	push(&root, 80);
	push(&root, 90);
	push(&root, 100);
	
	// Trying to push beyond the stack limit
	push(&root, 110); // This should trigger "Stack Overflow"
	
	// Print the stack
	print(&root);
	
	// Popping elements from the stack
	int result = pop(&root);
	printf("Popped element: %d\n", result);
	print(&root);

	return 0;
}

