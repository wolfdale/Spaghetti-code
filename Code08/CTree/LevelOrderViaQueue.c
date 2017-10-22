#include <stdio.h>
#include <stdlib.h>
#define MAX_Q_SIZE 500
 

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node** createqueue(int* front,int* rear){
	*front=0;
	*rear=0;
	struct node** q = (struct node**)malloc(sizeof(struct node)*100);
	return q;
}
void enqueue(struct node** q ,int *front,int*rear,struct node* key){
	q[*rear] = key;
	*rear=*rear+1;
	
}
struct node* dequeue(struct node** q,int * front,int * rear){
	*front=*front+1;
	return q[*front-1];
}
void leveorder(struct node* root){
	int front=0,rear=0;
	struct node **queue = createqueue(&front,&rear);
	
	struct node* temp = root;
	while(temp!=NULL){
		printf("%d ",temp->data);
		
		enqueue(queue,&front,&rear,temp->left);
		enqueue(queue,&front,&rear,temp->right);
		temp = dequeue(queue,&front,&rear);
	}
	
	
} 
struct node* newNode(int data)
{
    struct node* node = (struct node*)
                        malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
 
    return(node);
}
int main()
{
    struct node *root = newNode(1);
    root->left        = newNode(2);
    root->right       = newNode(3);
    root->left->left  = newNode(4);
    root->left->right = newNode(5);
 
    printf("Level Order traversal of binary tree is \n");
    leveorder(root);
 
    return 0;
}
