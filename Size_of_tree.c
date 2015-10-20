#include<stdio.h>
#include<stdlib.h>
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

int sizeoftree(struct node *root)
{

    if(root==NULL)
    {
        return 0;
    }
    else{
        return( sizeoftree(root->left) + 1 + sizeoftree(root->right) );
    }
}

int main()
{
    struct node* root=newnode(1);
    root->left=newnode(4);
    root->right=newnode(7);
    root->left->left=newnode(5);
    root->left->right=newnode(3);
    root->right->left=newnode(9);
    root->right->right=newnode(10);
    root->right->left->left=newnode(14);

    printf("size of  Binary tree %d",sizeoftree(root));

    return 0;
}
