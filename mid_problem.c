#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node* insert_to_front(struct node* head, int item)
{
	struct node *ptr;
	ptr = (struct node*)malloc(sizeof(struct node));
	ptr -> data = item;
	ptr -> next = NULL;
	
	if(head=NULL)
	{
		head = ptr;
	}
	else
	{
		ptr->next = head;
		head = ptr;
	}
	return head;
}

struct node* insert_to_end(struct node* end, int item)
{
	struct node *ptr;
	ptr = (struct node*)malloc(sizeof(struct node));
	ptr -> data = item;
	ptr -> next = NULL;

	head->next = ptr;

}

int main()
{
	struct node* list = NULL;































