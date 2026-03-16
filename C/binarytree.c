#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	int data;
	struct Node *left;
	struct Node *right;
} node;

node* creation(int data) {
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

node* insert(node* root, int data) {
	if (data == -1) {
		return root;
	}
	if (root == NULL) {
		return creation(data);
	}
	else if (data < root->data) {
		root->left = insert(root->left, data);
	} 
	else if (data > root->data) {
		root->right = insert(root->right, data);
	}
	return root;
}
node* search(node* root,int value) {
	if(root == NULL || root->data == value){
		return root;
	}
	if(value < root->data){
		return search(root->left,value);
	}
		return search(root->right,value);
} 
node* min(node* root){
	while(root->left != NULL){
		root = root->left;
	}
	return root;
}
node* max(node* root){
	while(root->right != NULL){
		root = root->right;
	}
	return root;
}
node* arrayToBST(int arr[], int n) {
	int i;
	node* root = NULL;
	for (i = 0; i < n; i++) {
		root = insert(root, arr[i]);
	}
	return root;
}
void inorder(node* root) {
	if (root != NULL) {
		inorder(root->left);
		printf("%4d ", root->data);
		inorder(root->right);	
	}
}
node* predecessor(node* root, int key) {
    node* p = NULL;
    while (root != NULL) {
        if (key > root->data) {
            p = root;          
            root = root->right; 
        } else if (key < root->data) {
            root = root->left; 
        } else {
        	if(root->left != NULL) {
        		p = max(root->left);
			}
            break; 
        }
    }
    if (p == NULL) {
     printf("No predecessor exists for the smallest element.\n");
    }
    
    return p; 
}
node* successor(node* root, int key) {
    node* p = NULL;  // This will store the successor
    while (root != NULL) {
        if (key < root->data) {
            p = root;     
            root = root->left;
        } else if (key > root->data) {
            root = root->right;
        } else {
            if (root->right != NULL) {
                p = min(root->right);
            }
            break;
        }
    }
        if (p == NULL) {
     printf("No successor exists for the smallest element.\n");
    }
    return p;
}
int main() {
	int arr[] = {50, 30,10,40,-1,-1,5,-1,-1,20,-1,-1,70,55,-1,-1,80,75,-1,-1,90,-1,-1};
	int n = sizeof(arr) / sizeof(arr[0]);
	node* root = arrayToBST(arr, n);
//	inorder(root);
//    int value = 40;
//	node* result = search(root,30);
//	if(result != NULL) {
//		printf("%d",value);
//	} else {
//		printf("Not found");
//	}
//node* minNode = min(root);
//node* maxNode = max(root);
//printf("Maximum element is %d \n",minNode->data);
//printf("Minimum element is %d \n",maxNode->data);
//node* n1 = predecessor(root,5);
node* n2 = successor(root,90);
printf("%d",n2->data);
	return 0;
}
