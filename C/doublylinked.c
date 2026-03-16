#include<stdio.h>
#include <stdlib.h>
typedef struct node {
	int data;
	struct node *next;
	struct node *previous;
} Node;
Node *createNode(int data) {
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = NULL;
	newNode->previous = NULL;
	return newNode;
}
void insertAtbeg(Node **head,int data) {
	Node* newNode = createNode(data);
	    if (*head == NULL) {
        *head = newNode;
        return;
    }
	newNode->next = *head;
	(*head)->previous = newNode;
	*head = newNode;
}
void insertetend(Node **head,int data) {
	Node* newNode = createNode(data);
	Node* temp = *head;
    if (*head == NULL) {
    *head = newNode;
    return;
    }
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newNode;
	newNode->previous = temp;
	newNode->next = NULL;
}
void insertatmiddle(Node **head,int data,int position) {
	Node* newNode = createNode(data);
	if(position == 1) {
	newNode->next = *head;
	(*head)->previous = newNode;
	*head = newNode;
	return;
	}
	Node* temp = *head;
	int i = 0;
	for(i = 1;i<position-1 && temp != NULL;i++) {
		temp = temp->next;
	}
    if (temp == NULL) {
    printf("Position out of bounds\n");
    free(newNode);
    return;
    }
    newNode->next = temp->next;
    newNode->previous = temp;

    if (temp->next != NULL) {
        temp->next->previous = newNode;
    }
    temp->next = newNode;
}
void deleteatfirst(Node **head) {
	if(*head == NULL) {
		printf("List is empty");
		return;
	}
	Node* temp = *head;
	(*head)->next->previous == NULL;
	*head = (*head)->next;
	free(temp);	
}
void deleteatend(Node **head) {
	if(*head == NULL) {
	printf("List is empty");
	return;
	}
	Node* last = *head;
	if(last->next == NULL) {
		last->next = NULL;
		free(last);
		return;
	}
	while(last->next != NULL) {
		last = last->next;
	}
	
	last->previous->next = NULL;
	free(last);
}
void deleteAtMiddle(Node **head, int position) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }

    Node* temp = *head;
    int i;

    // If deleting the head node
    if (position == 1) {
        *head = temp->next;
        if (temp->next != NULL) {
            temp->next->previous = NULL;
        }
        free(temp);
        return;
    }

    // Traverse to the node at the given position
    for (i = 1; i < position && temp != NULL; i++) {
        temp = temp->next;
    }

    // If the position is greater than the number of nodes
    if (temp == NULL) {
        printf("Position out of range\n");
        return;
    }

    // Update the pointers to unlink the node
    if (temp->previous != NULL) {
        temp->previous->next = temp->next;
    }
    if (temp->next != NULL) {
        temp->next->previous = temp->previous;
    }

    free(temp);
}

void print(Node *head) {
	while(head != NULL) {
		printf("%d <-> ",head->data);
		head = head->next;
	}
	printf("NULL \n");
}
int main() {
	Node* head = NULL;
	insertAtbeg(&head,10);
	insertAtbeg(&head,20);
	insertetend(&head,30);
	insertatmiddle(&head,40,3);
//	insertAtbeg(&head,20);
//	insertAtbeg(&head,30);
//	insertatend(&head,40);
//	insertatend(&head,50);
//	deleteatfirst(&head);
	insertAtbeg(&head,50);
	deleteatend(&head);
	insertatmiddle(&head,60,1);
    deleteAtMiddle(&head,2);

	print(head);
	return 0;
}
