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

int gettop(struct node* head){
	return head->item;
}
int isempty(struct node* head){
	if(head==NULL){
		return 0;
	}
	else{
		return 1;
	}
}
void pop(struct node* head){
	if(head==NULL){
		return;
	}
	struct node* temp = head;
	head=head->next;
	free(temp);
}
int main(void) {
	struct node *root = NULL;
	struct node *stack = NULL;
	insert(&root,1);
	insert(&root,2);
	insert(&root,3);
	insert(&root,3);
	insert(&root,2);
	insert(&root,1);
	insert(&root,15);
	struct node * temp = root;
	struct node* temp2 = stack;
	while(temp!=NULL){
		insert(&stack,temp->item);
		temp=temp->next;
	}
	while(temp2!=NULL){
		temp2 = temp2->next;	
	}
	temp = root;
	temp2 = stack;
	int flag = 0;
	while(isempty(stack)){
		while(temp!=NULL){
			if(temp->item == gettop(stack)){
				temp=temp->next;
				stack = stack->next;
				flag = 1;
				
			}
			else{
				flag = 0;
				break;
			}
		}
		if(flag == 0){
			break;
		}
	}
	if(flag == 0){
		printf("Not palindrome");
	}
	else{
		printf("palindrome");
	}
	
	
	return 0;
}
