#include <stdlib.h>
#include <stdio.h>
struct node
{
	int data;
	struct node* left; 
	struct node* right; 
};


void inorder(struct node*root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        inorder(root->left);
        printf("%d\n",root->data);
        inorder(root->right);
    }
}


struct node* bst_insert(struct node* ref_node , int item)
{
	//Create a Node to be inserted
	int flag = 1;
	struct node* ptr;
	ptr = ref_node;
	struct node* new_node;
	new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = item;
	new_node->left = NULL;
	new_node->right =NULL; 
	if(ref_node == NULL)
	{
		ref_node = new_node;
		return ref_node;
	}
	//Find Position For node to be inserted
	
	while(flag)
	{
		if((ptr->data > item) && (ptr ->left != NULL))
		{
			ptr = ptr->left;
		}
		else if ((ptr -> data <= item) && (ptr -> right != NULL))
		{
			ptr = ptr->right;
		}
		else
		{
			flag = 0;
		}
	}
	if(ptr->data > item)
	{
		ptr->left = new_node;
	}
	else
	{
		ptr->right = new_node;
	}

	return ref_node;





}


int main()
{

	struct node* root = NULL;
	root = bst_insert(root,5);
	root = bst_insert(root,3);
    root=bst_insert(root,10);
    root=bst_insert(root,24);
    root=bst_insert(root,4);
    root=bst_insert(root,3);
    root=bst_insert(root,99);
	root = bst_insert(root,8);
	inorder(root);
	return 0;	
}









