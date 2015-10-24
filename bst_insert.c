#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node*left;
    struct node*right;
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


struct node* new_node(int item)
{
    struct node * node;
    node=(struct node*)malloc(sizeof(struct node));
    node->data=item;
    node->left=NULL;
    node->right=NULL;
    return node;

}

struct node* BST_insert(struct node* node,int key)
{
    if(node==NULL)
    {
        return(new_node(key));

    }
    if((node->data)>key)
    {
        node->left=BST_insert(node->left,key);
    }
    else{
        node->right=BST_insert(node->right,key);
    }

    return node;
}

int main()
{
    struct node* root=NULL;
    root=BST_insert(root,5);
    BST_insert(root,10);
    BST_insert(root,24);
    BST_insert(root,4);
    BST_insert(root,3);
    BST_insert(root,99);
    inorder(root);

    return 0;
}


