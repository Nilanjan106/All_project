#include<stdio.h>
#include<coino.h>

// node creation
 struct Node
 {
 	struct Node * prev;
 	int data;
 	struct Node * next;
 };
 // insert node at the front 
 void insertFront(struct Node**head,int data)
 {
 	//allocate memory for newNode
 	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
 	
 	//assign data to newNode
 	newNode->data;
 	//make a newNode as a head
 	newNode->next=(*head);
 	//assign 
 }
