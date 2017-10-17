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
void kthlargeutil(struct node* root,int k, int c){
	static int temp = 0;
	if(root==NULL || temp >= k){
		return;
	}
	//REVERSE INORDER
	kthlargeutil(root->right,k,temp);
	temp=temp+1;
	if(temp==k){printf("%d",root->item);return;}
	kthlargeutil(root->left,k,temp);
	
	
}
void kthlarge(struct node* root,int k){
	static int c=0;
	kthlargeutil(root,k,c);
}

int main(){
	struct node* root = build_node(50);
	root->left = build_node(25);
	root->right = build_node(100);
	root->left->left = build_node(15);
	root->left->right = build_node(30);
	root->right->left = build_node(80);
	root->right->right = build_node(150);
	//root->right->right->left = build_node();
	//root->right->right->left->right = build_node(81);
	//root->right->right->left->left = build_node(91);
	kthlarge(root,13);
}
