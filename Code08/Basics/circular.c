#include <stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};

struct node* insert(struct node *head,int key){
	struct node* ptr = (struct node*)malloc(sizeof(struct node));
	ptr->next = NULL;
	ptr->data = key;
	if(head == NULL){
		head = ptr;
	}
	else{
		ptr->next = head;
		head = ptr;
	}
	return head;
}
void checkcircular(struct node* head){
	struct node* _node = head;
	while(_node!=NULL && _node->next != head){
		_node=_node->next;
	}
	if(_node==head){
		printf("Circular");
	}
	else{
		printf("Not circular");
	}
}
struct node* makecircular(struct node* head){
	struct node* start = head;
	while(head->next !=NULL){
		head = head->next;
	}
	head->next = start;
	return start;
}
int main(void) {
	struct node* head = NULL;
	head = insert(head,1);
	head = insert(head,2);
	head = insert(head,3);
	head = insert(head,4);
	head = insert(head,5);
	head = insert(head,6);
	head = insert(head,7);
	struct node* temp = head;
	while(temp !=NULL){
		printf("%d ",temp->data);
		temp = temp->next;
	}
	checkcircular(head);
	head = makecircular(head);
	checkcircular(head);
	return 0;
}
