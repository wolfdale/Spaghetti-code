#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node* left;
  struct node* right;
};

 
int search(int arr[], int strt, int end, char value)
{
  int i;
  for(i = strt; i <= end; i++)
  {
    if(arr[i] == value)
      return i;
  }
}
 
struct node* newNode(int data)
{
  struct node* node = (struct node*)malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
 
  return(node);
}
 
void printInorder(struct node* node)
{
  if (node == NULL)
     return;
  printInorder(node->left);
  printf("%d ", node->data);
 
  printInorder(node->right);
}
struct node* buildTree(int in[], int pre[], int inStrt, int inEnd)
{
  static int preIndex = 0;
 
  if(inStrt > inEnd)
     return NULL;
 
  struct node *tNode = newNode(pre[preIndex++]);
 
  if(inStrt == inEnd)
    return tNode;
  int inIndex = search(in, inStrt, inEnd, tNode->data);
  tNode->left = buildTree(in, pre, inStrt, inIndex-1);
  tNode->right = buildTree(in, pre, inIndex+1, inEnd);
 
  return tNode;
} 
int main()
{
  int in[] = {3,2,4,1,6,5,7};
  int pre[] = {1,2,3,4,5,6,7};
  
  struct node *root = buildTree(in, pre, 0, 6);
 
  printf("Inorder traversal of the constructed tree is \n");
  printInorder(root);
  return 0;
 }
