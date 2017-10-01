#include<stdio.h>
#include<stdlib.h>

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

void printleft(struct node* root){
	if(root == NULL){
		return;
	}
	if(root->left == NULL || root->right == NULL){
		return;
	} 
	printf("%d",root->left->item);
	printleft(root->left);
	printleft(root->right);
}

int main(){
	struct node* root = build_node(1);
	root->left = build_node(2);
	root->right = build_node(3);
	root->left->left = build_node(4);
	root->left->left->left = build_node(9);
	root->left->right = build_node(5);
	root->right->left = build_node(6);
	root->right->right = build_node(7);
	root->right->right->left = build_node(8);
	printleft(root);
	
}
