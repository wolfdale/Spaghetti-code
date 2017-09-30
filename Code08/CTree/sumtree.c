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

int sum(struct node* _node){
	if(_node == NULL){
		return 0;
	}
	else{
		return sum(_node->left)+_node->item+sum(_node->right);
	}
}

int isSumTree(struct node* root){
	//its a sum tree
	if(root == NULL || (root->left == NULL && root->right == NULL) ){
		return 1;
	}
	
	int suml = sum(root->left);
	int sumr = sum(root->right);
	printf("sum of left and right subtree %d %d\n",suml, sumr );
	if(((suml + sumr) == root->item) && isSumTree(root->left) && isSumTree(root->right)){
		return 1;
	}
	return 0;
}
int main(){
	struct node* root = build_node(26);
	root->left = build_node(10);
	root->right = build_node(3);
	root->left->left = build_node(4);
	root->left->right = build_node(6);
	
	root->right->right = build_node(3);
	
	if(isSumTree(root) == 1){
		printf("Yes");
	}
	else{
		printf("No");
	}
}
