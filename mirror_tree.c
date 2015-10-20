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

void mirroroftree(struct node * node)
{
    if(node==NULL)
    {
        return ;
    }
    else{
        mirroroftree(node->left);
        mirroroftree(node->right);
        struct node* temp;
        temp=node->left;
        node->left=node->right;
        node->right=temp;
    }

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
    struct node* root=newnode(1);
    root->left=newnode(4);
    root->right=newnode(7);
    root->left->left=newnode(5);
    root->left->right=newnode(3);
    root->right->left=newnode(9);
    root->right->right=newnode(10);
    root->right->left->left=newnode(14);
    inorder(root);
    printf("\n");
    mirroroftree(root);
    printf("\n");
    inorder(root);
    return 0;
}
