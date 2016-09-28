#include <stdio.h>
#include<stdlib.h>

struct qnode* deqeue(struct qnode* head);
void push(struct qnode* head,int x);
struct qnode* pop(struct qnode* head);

struct qnode{
	int data;
	struct qnode* next;
};

void enqueue(struct qnode* head,int x)
{
	struct qnode* ptr = (struct qnode*)malloc(sizeof(struct qnode));
	struct qnode* temp;
	temp = head;
	while(temp->next !=NULL)
	{
		temp = temp->next;
	}
	ptr->data = x;
	ptr->next = NULL;
	
}

struct qnode* deqeue(struct qnode* head)
{
	return head->next;	
}

void push(struct qnode* head,int x)
{
	enqueue(head,x);
	
}
struct qnode* pop(struct qnode* head)
{
	deqeue(head);
	return head;
}

int main(void) {

	struct qnode* head = NULL;
	push(head,5);

}
