#include <stdio.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node* new_node(int d);
int max(int a,int b);
int height(struct node* root);
int diameter(struct node* root);


int diameter(struct node* root)
{
	//if tree is empty return 0
	//recursively get heigth of left and right subtree
	//recursively get dia of left and right sub tree
	//return max of (left/right height.. max of left/right dia .. plus 1)
	if(root==NULL)
	{
		return 0;
	}
	else{
		
		int lheight = height(root->left);
		int rheight = height(root->right);
		
		int ldia = diameter(root->left);
		int rdia = diameter(root->right);
		
		return(max((1+lheight+rheight) ,max(ldia,rdia)));
	}
	
}


int height(struct node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	else
	{
		return(1+max(height(root->left),height(root->right)));
	}
}
int max(int a,int b)
{
	return((a>=b)?a:b);
}

struct node* new_node(int d)
{

	struct node* new = (struct node*)
                       malloc(sizeof(struct node));
	new -> data = d;
	new -> left = NULL;
	new -> right = NULL;
	return new;

}
int main(void) {
	struct node *root = new_node(1);
  root->left        = new_node(2);
  root->right       = new_node(3);
  root->left->left  = new_node(4);
  root->left->right = new_node(5);
 
  printf("Diameter of the given binary tree is %d\n", diameter(root));
 
	
	
	return 0;
}
