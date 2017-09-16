#include <stdio.h>
#include <stdlib.h>
struct node{
	int item;
	struct node *left;
	struct node *right;
};

struct node* build_node(int data){
	struct node *new_node = (struct node*)malloc(sizeof(struct node));
	new_node->item = data;
	new_node->left = NULL;
	new_node->right = NULL;
	return new_node;
}

void preorder(struct node* root){
	if(root == NULL){
		return;
	}
	else{
		printf("->%d",root->item);
		preorder(root->left);
		preorder(root->right);
	}
}

void postorder(struct node* root){
	if(root == NULL){
		return;
	}
	else{
		postorder(root->left);
		postorder(root->right);
		printf("-> %d", root->item);
	}

}

void inorder(struct node* root){
	if(root == NULL){
		return;
	}
	else{
		postorder(root->left);
		printf("->%d", root->item);
		postorder(root->right);
		
	}

}



int main(void) {
	struct node* root = build_node(1);
	root->left = build_node(2);
	root->right = build_node(3);
	root->left->left = build_node(4);
	root->left->right = build_node(5);
	root->right->left = build_node(6);
	root->right->right = build_node(7);
		
	//Preorder
	preorder(root);
	printf("\n");
	postorder(root);
	printf("\n");
	inorder(root);
	
	
	
}
	
	
	

