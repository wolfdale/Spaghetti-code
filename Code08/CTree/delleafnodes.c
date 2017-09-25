#include <stdio.h>
#include<stdlib.h>

struct node{
	int item;
	struct node *left;
	struct node *right;
};

struct node *getNewNode(int data)
{
	struct node * new = (struct node*)malloc(sizeof(struct node));
	new->item = data;
	new->left = NULL;
	new->right = NULL;
	return new;
	
}

void printonlyleaf(struct node* root){
	if(root==NULL){
		return;
	}
	if((root->left==NULL) && (root->right == NULL)){
		printf("%d ",root->item);
	}
	else{
		printonlyleaf(root->left);
		printonlyleaf(root->right);
	}
	
	
	
}
void deleteonlyleaf(struct node* root){
	if(root==NULL){
		return;
	}
	if((root->left==NULL) && (root->right == NULL)){
		printf("Freing %d \n",root->item);
		free(root);
	}
	else{
		printonlyleaf(root->left);
		printonlyleaf(root->right);
	}
	
	
	
}

void inorder(struct node* ptr){
	if(ptr == NULL){
		return;
	}
	inorder(ptr->left);
	printf("%d ",ptr->item);
	inorder(ptr->right);
}

int main(void) {
	struct node* root = getNewNode(5);
	root->left = getNewNode(10);
	root->right = getNewNode(12);
	
	root->left->left = getNewNode(120);
	root->left->right = getNewNode(130);
	
	root->left->left->left = getNewNode(110);
	root->left->left->right = getNewNode(610);
	inorder(root);
	printf("\n");
	printonlyleaf(root);
	printf("\n");
	deleteonlyleaf(root);
	return 0;
}
