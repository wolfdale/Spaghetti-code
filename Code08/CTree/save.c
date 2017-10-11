
#include <stdio.h>
#include <stdlib.h>

struct node
{
     int data;
     struct node* left;
     struct node* right;
};
struct node* newNode(int data)
{
     struct node* node = (struct node*)
                                  malloc(sizeof(struct node));
     node->data = data;
     node->left = NULL;
     node->right = NULL;
 
     return(node);
}
 

int printInorder(struct node* node,int a[])
{
	static int x=0;
     if (node == NULL)
          return 0;
 
     /* first recur on left child */
     printInorder(node->left,a);
 
     /* then print the data of node */
       a[x] = node->data;
       x++;
       printf("%d",node->data);
     /* now recur on right child */
     printInorder(node->right,a);
     return x;
}
 

/* Driver program to test above functions*/
int main()
{
     struct node *root  = newNode(1);
     root->left             = newNode(2);
     root->right           = newNode(3);
     root->left->left     = newNode(4);
     root->left->right   = newNode(5); 
     int a[500]={0};
     int i;
     int n =  printInorder(root,a);  
     printf("%d\n",n);
     for(i=0;i<n;i++){
     	printf("%d\n",a[i]);
     }
     return 0;
}
