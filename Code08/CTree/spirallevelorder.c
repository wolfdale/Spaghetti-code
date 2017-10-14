#include<stdio.h>
#include<stdlib.h>

struct node{
	int item;
	struct node *left;
	struct node *right;
};
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

void printlevelorder(struct node *root,int level){
	if(root==NULL)
	{
		return;
	}
	if(level == 1){
		printf("%d ",root->item);
	}
	
	printlevelorder(root->left,level-1);
	printlevelorder(root->right,level-1);
}
void printlevelorderspiral(struct node *root,int level,bool itr){
	if(root==NULL){
		return ;
	}
	if(level == 1){
		printf("%d ", root->item);
	}
	if(itr){
		printlevelorderspiral(root->left,level-1,itr);
		printlevelorderspiral(root->right,level-1,itr);
	}
	else{
		printlevelorderspiral(root->right,level-1,itr);
		printlevelorderspiral(root->left,level-1,itr);
	}
	
}
void printlevelspiral(struct node* root){
	int h = height(root);
	bool itr = true;
	int i;
	for(i=1;i<=h;i++){
		printlevelorderspiral(root,i,itr);
		itr = !itr;
	}
	
}

void printlevel(struct node* root){
	int h = height(root);
	int i;
	for(i=1;i<=h;i++){
		printlevelorder(root,i);
	}
}


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


int main(){
	struct node* root = build_node(1);
	root->left = build_node(2);
	root->right = build_node(3);
	root->left->left = build_node(4);
	root->left->right = build_node(5);
	root->right->left = build_node(6);
	root->right->right = build_node(7);
	root->right->right->left = build_node(8);
	root->right->right->left->right = build_node(81);
	root->right->right->left->left = build_node(91);
	printf("%d\n",height(root));
	printlevel(root);
	printf("\n");
	printlevelspiral(root);
	
}
