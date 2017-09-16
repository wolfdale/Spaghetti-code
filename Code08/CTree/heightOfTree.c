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
void printLeafNodes(struct node * root){
	if(root==NULL){
		return;
	}
	else if((root->left == NULL) && (root->right == NULL)){
		printf("%d",root->item);
	}
	else{
		printLeafNodes(root->left);
		printLeafNodes(root->right);
	}
}

int height(struct node* root){
	if (root == NULL){
		return 0;
	}
	int lHeight = height(root->left);
	int rHeight = height(root->right);
	if(lHeight>rHeight){
		return lHeight+1;
	}
	else{
		return rHeight+1;
	}
}

int main(){
	struct node* root = build_node(1);
	root->left = build_node(2);
	root->right = build_node(3);
	root->left->left = build_node(4);
	root->left->right = build_node(5);
	root->right->left = build_node(6);
	root->right->right = build_node(7);
	root->right->right->left = build_node(8);
	printf("%d",height(root));
}




