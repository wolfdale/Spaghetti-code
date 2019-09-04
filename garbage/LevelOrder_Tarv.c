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

int print_order(struct node *root,int ht )
{
    if(root==NULL)
    {
        return 0;
    }
    if(ht==1)
    {
        printf("%d",root->data);
    }
    else{
        print_order(root->left,ht-1);
        print_order(root->right,ht-1);
    }
    return 0;
}

void lvl_order_trav(struct node * root,int height)
{
    int i;
    for(i=0;i<=height;i++)
    {
        print_order(root,i);
    }
    return;


}


int height(struct node* node)
{
   if (node==NULL)
       return 0;
   else
   {

     int lheight = height(node->left);
     int rheight = height(node->right);
     if (lheight > rheight)
         return(lheight+1);
     else return(rheight+1);
   }
}

int main()
{
    int ht;
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
    ht=height(root);
    printf("LEVEL ORDER TRAVERSAL\n");
    lvl_order_trav(root,ht);
    printf("\n");
    del_tree(root);


    return 0;
}
