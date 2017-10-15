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
void printfullpath(int path[] , int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",path[i]);
	}
	printf("\n");
}
void pathrecur(struct node* root,int path[] ,int n){
	if(root==NULL){
		return; 
	}
	path[n] = root->item;
	n++;
	
	if(root->left == NULL && root->right ==NULL){
		printfullpath(path,n);
	}
	pathrecur(root->left,path,n);
	pathrecur(root->right,path,n);
	
}

void printpath(struct node* root){
	int path[200];
	pathrecur(root,path,0);
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
	printLeafNodes(root);
	printf("\n");
	printpath(root);
	
	
}
