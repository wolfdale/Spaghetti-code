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
void detectloop(struct node* head){
	struct node* slow=head;
	struct node* fast=head;
	
	while(fast&&slow&&fast->next){
		slow = slow->next;
		fast = fast->next->next;
		if(fast==slow){
			printf("LOOP detected");
			return;
		}
	}
	printf("Loop Not detected");
	
}
int main(void) {
	struct node * root = NULL;
	insert(&root,1);
	insert(&root,2);
	insert(&root,3);
	insert(&root,4);
	insert(&root,5);
	insert(&root,6);
	struct node * temp = root;
	while(temp!=NULL){
		printf("%d\n",temp->item);
		temp=temp->next;
	}
	root->next->next->next->next->next = root;
	detectloop(root);
	
	return 0;
}
