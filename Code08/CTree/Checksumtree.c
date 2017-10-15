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
int checksumtree(struct node* root){
	//node data = sum of left child/subtree + sum of right/subtree
	if(root==NULL || (root->left ==NULL && root->right == NULL)){
		return 1;
	}
	int left_data = 0;
	int right_data = 0;
	
	if(root->left !=NULL){
		left_data = root->left->item;
	}
	if(root->right !=NULL){
		right_data = root->right->item;
	}
	if((root->item == left_data+right_data)&&checksumtree(root->left)&&checksumtree(root->right)){
		return 1;
	}
	else{
		return 0;//Not sum tree
	}
}
int main(){
	struct node* root = build_node(10);
	root->left = build_node(8);
	root->right = build_node(2);
	root->left->left = build_node(5);
	root->left->right = build_node(3);
	root->right->left = build_node(2);
	printf("%d\n",height(root));
	printf("%d",checksumtree(root));
}
