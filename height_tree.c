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

int heightoftree(struct node * root)
{
    int left_ht,right_ht;
    if(root==NULL)
    {
        return 0;
    }
    else{
        left_ht=heightoftree(root->left);
        right_ht=heightoftree(root->right);
        if(left_ht>right_ht)
        {
            return left_ht+1;
        }
        else
            return right_ht+1;
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

    printf("Height of  Binary tree %d",heightoftree(root));

    return 0;
}
