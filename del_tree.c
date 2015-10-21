#include<stdio.h>
#include<stdlib.h>
/*NOTE IT IS A PROGRAM TO FIND HEIGHT OF TREE(NOT NODE) !!*/
struct node
{
    struct node *left;
    int data;
    struct node *right;
};

struct node *newnode(int item)
{
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=item;
    ptr->left=NULL;
    ptr->right=NULL;

    return(ptr);

}

int del_tree(struct node * node)
{
    if(node==NULL)
    {
        return 0;
    }
    else{
        del_tree(node->left);
        del_tree(node->right);
        printf("\nDELETING NODE::%d\n",node->data);
        free(node);
    }
     return 0;

}

void inorder(struct node *root)
{
    if (root==NULL)
    {
        return;
    }
    else{
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);
    }
}

int main()
{
    struct node* root;

    root=newnode(1);
    root->left=newnode(4);
    root->right=newnode(7);
    root->left->left=newnode(5);
    root->left->right=newnode(3);
    root->right->left=newnode(9);
    root->right->right=newnode(10);
    root->right->left->left=newnode(14);
    inorder(root);
    printf("\n");
    del_tree(root);
    printf("\n");
    root=NULL;
    inorder(root);
    return 0;
}
