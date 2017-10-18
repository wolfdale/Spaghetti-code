#include<stdlib.h>
#include <stdio.h>

struct node{
	int item;
	struct node *next;
};
void insert(struct node **ref , int data){
	struct node *new_node = (struct node *)malloc(sizeof(struct node));
	new_node -> item = data;
	new_node -> next = NULL;
	if(*ref == NULL){
		(*ref) = new_node;
	}
	else{
		new_node -> next = (*ref);
		*ref = new_node;
	}
}
void insertafter(struct node** ref ,int key,int ser){
	struct node* temp = *ref;
	while(temp!=NULL){
		if(temp->item == ser){
			break;
		}
		temp = temp->next;
	}
	struct node *new_node = (struct node *)malloc(sizeof(struct node));
	new_node -> item = key;
	new_node -> next = temp->next;
	temp->next = new_node;
}
int main(void) {
	struct node * root = NULL;
	insert(&root,1);
	insert(&root,2);
	insert(&root,3);
	insert(&root,4);
	insert(&root,5);
	insert(&root,6);
	insertafter(&root,40,2);
	struct node * temp = root;
	while(temp!=NULL){
		printf("%d\n",temp->item);
		temp=temp->next;
	}
	
	
	return 0;
}
