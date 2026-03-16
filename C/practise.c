#include<stdio.h>
#include <stdlib.h>
typedef struct node {
	int data;
	struct node *next;
} Node;
Node *createNode(int data) {
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}
void insertAtbeg(Node **head,int data) {
	Node* newNode = createNode(data);
	newNode->next = *head;
	*head = newNode;
}
void insertatend(Node **head,int data) {
	Node* newNode = createNode(data);
	if(*head == NULL) {
		*head = newNode;
		return;
	}
	Node* temp = *head;
	while(temp->next !=NULL) {
		temp = temp->next;
	}
	temp->next = newNode;
}
void deleteatfirst(Node **head){
		if(*head == NULL) {
		printf("List is empty \n");
		return;
	}
	 Node* temp = *head;
    *head = (*head)->next;       
    free(temp); 
}
void deleteatend(Node **head) {
	if(*head == NULL) {
		printf("List is empty \n");
		return;
	}
	Node* last = (*head)->next;
	Node* secondlast = *head;
	if(last->next == NULL) {
		free(*head);
		*head = NULL;
		return;
	}
	while(last->next != NULL) {
		last = last->next;
		secondlast = secondlast->next;
	}
	secondlast->next = NULL;
	free(last);
}
void deleteatmiddle(Node **head,int position){
	Node* temp = *head;
	for(i = 1;i < position-1 && temp != NULL;i++) {
		temp = temp->next;
	}
	t
}
void insertatmiddle(Node **head,int data,int position) {
	Node* newNode = createNode(data);
	if(position == 1) {
		newNode->next = head;
		head = newNode;
		return;
	}
	Node* temp = *head;
	int i;
	for(i = 1;i< position && temp != NULL;i++) {
		temp = temp->next;
	}
	if(temp == NULL) {
		printf("Position out of bound");
		free(newNode);
		return;
	}
	newNode->next = temp->next;
	temp->next = newNode;
	
}
	void print(Node *head) {
	while(head != NULL) {
		printf("%d -> ",head->data);
		head = head->next;
	}
	printf("NULL \n");
}
int main() {
	Node* head = NULL;
	insertAtbeg(&head,10);
	insertAtbeg(&head,20);
	insertAtbeg(&head,30);
	insertatend(&head,40);
//	insertatend(&head,50);
	deleteatfirst(&head);
	deleteatend(&head);
	insertatmiddle(&head,60,2);

	print(head);
	return 0;
}
