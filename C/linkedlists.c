#include<stdio.h>
typedef struct Node {
    int data;
    struct Node *next;
} Node;
Node *createNode(int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
/*//struct node {
//	int data;
//	struct node* next;
//};
struct node* creation(int value) {
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode -> data = value;
	newnode -> next = NULL;
	return newnode;
}*/
void insertAtBeginning(struct Node** head, int value) {
    struct Node* newnode = creation(value);
    newnode ->next = *head;
    *head = newnode;
}
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}
//
//
//	int main() {
//		struct Node* head = NULL;
//	       insertAtBeginning(&head, 10);
//           insertAtBeginning(&head, 20);
//           insertAtBeginning(&head, 30); 
//            printf("Linked List: ");
//           printList(head);
//		return 0;
//	}

//int main() {
//    Node *first = createNode(10);
//    first->next = createNode(20);
//    first->next->next = createNode(30);
//    printf("Linked List: ");
//    Node *temp = first;
//    while (temp)
//    {
//        printf("%d ", temp->data);
//        temp = temp->next;
//    }
//
//    return 0;
//}
//typedef struct Node {
//	int data;
//	struct Node *next;
//} Node;
//
//Node *createNode(int data) {
//	Node *newNode = (Node *)malloc(sizeof(Node));
//	 newNode -> data = data;
//	 newNode -> next = NULL;
//}
//void insertAtBeginning(struct Node** head, int value) {
//    struct Node* newNode = createNode(value);
//    newNode->next = *head;
//    *head = newNode;
//}
//void printList(struct Node* node) {
//    while (node != NULL) {
//        printf("%d -> ", node->data);
//        node = node->next;
//    }
//    printf("NULL\n");
//}
//int main() {
//    struct Node* head = NULL;
//
//    // Insert at the beginning
//    insertAtBeginning(&head, 10);
//    insertAtBeginning(&head, 20);
//    insertAtBeginning(&head, 30);
//
//    // Insert at the end
//    insertAtEnd(&head, 40);
//    insertAtEnd(&head, 50);
//
//    // Print the list
//    printf("Linked List: ");
//    printList(head);
//
//    return 0;
//}
#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node *next;
} Node;
Node *createNode(int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void insertAtBeginning(Node** head, int value) {
    Node* newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;
}
void printList(Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}
void insertAtEnd(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}
int main() {
    Node* head = NULL;
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 30);
     insertAtEnd(&head, 40);
     insertAtEnd(&head, 60);
    // Print the list
    printf("Linked List: ");
    printList(head);
    return 0;
}





