#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *left,*right;
};

struct node* newnode(int key){
	struct node *ptr = (struct node*)malloc(sizeof(struct node));
	ptr->data = key;
	ptr->left = NULL;
	ptr->right = NULL;
	return ptr;
}
int search(int arr[], int strt, int end, int value)
{
    int i;
    for (i = strt; i <= end; i++)
    {
        if (arr[i] == value)
            break;
    }
    return i;
}
struct node* BuildTree(int in[],int post[],int instart, int inend){
	//Hardcode usually send it via pointer constant
	static int postindex = 7;
	if(instart>inend){
		return NULL;
	}
	
	struct node *new_node = newnode(post[postindex]);
	postindex--;

	if(instart==inend){
		return new_node;
	}
	
	int index = search(in, instart, inend, new_node->data);
	new_node->right = BuildTree(in,post,index+1,inend);
	new_node->left = BuildTree(in,post,instart,index-1);
	
	
	return new_node;
}
void preOrder(struct node* node)
{
    if (node == NULL) return;
    printf("%d ", node->data);
    preOrder(node->left);
    preOrder(node->right);
}
int main(void) {
	int in[]   = {4, 8, 2, 5, 1, 6, 3, 7};
    int post[] = {8, 4, 5, 2, 6, 7, 3, 1};
    struct node* root= BuildTree(in,post,0,7);
    preOrder(root);
	return 0;
}
