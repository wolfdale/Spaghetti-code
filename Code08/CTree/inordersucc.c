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
int findMinValSubtree(struct node* ref){
	while(ref->left !=NULL){
		ref = ref->left;
	}
	return ref -> item;
}
int getinoredersucc(struct node *root, struct node* innode){
	if(innode->right != NULL){
		return findMinValSubtree(innode->right);
	}
	else{
		struct node* succ = NULL;
		while(root!=NULL){
			if(innode->item > root->item){
				root = root->right;
			}
			else if(innode->item < root->item){
				succ = root;
				root = root->left;
				
			}
			else{
				break;
			}
		}
		if(succ !=NULL){
		return succ->item;
		}
		else{
			return 0;
		}
	}
}
int main(){
	struct node* root = build_node(80);
	root->left = build_node(50);
	root->right = build_node(100);
	root->left->left = build_node(40);
	root->left->right = build_node(55);
	root->right->left = build_node(90);
	root->right->right = build_node(110);
	root->right->right->left = build_node(105);
	struct node* innode = root->right->right->left;
	printf("%d",getinoredersucc(root,innode));
}
