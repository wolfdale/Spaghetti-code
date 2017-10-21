#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
struct node* left;
   struct node* right;
};


void BinaryTree2DoubleLinkedList(struct node *root, struct node** head)
{
    // Base case
    if (root == NULL) return;

    static struct node* prev = NULL;
 
    // Recursively convert left subtree
    BinaryTree2DoubleLinkedList(root->left, head);
 

    if (prev == NULL)
        *head = root;
    else
    {
        root->left = prev;
        prev->right = root;
    }
    prev = root;
 
    // Finally convert right subtree
    BinaryTree2DoubleLinkedList(root->right, head);
}
 
struct node* newNode(int data)
{
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->left = new_node->right = NULL;
    return (new_node);
}
 
/* Function to print nodes in a given doubly linked list */
void printList(struct node* node)
{
    while (node!=NULL)
    {
        printf("%d\n",node->data);
        node = node->right;
    }
}
 
/* Driver program to test above functions*/
int main()
{
    // Let us create the tree shown in above diagram
    struct node* root        = newNode(10);
    root->left        = newNode(12);
    root->right       = newNode(15);
    root->left->left  = newNode(25);
    root->left->right = newNode(30);
    root->right->left = newNode(36);
 
    // Convert to DLL
    struct node* head = NULL;
    BinaryTree2DoubleLinkedList(root, &head);
 
    // Print the converted list
    printList(head);
 
    return 0;
}
