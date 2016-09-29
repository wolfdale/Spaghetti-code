#include <stdio.h>
#include<stdlib.h>

struct qnode* deqeue(struct qnode* head);
struct qnode* pop(struct qnode* head);
struct qnode* enqueue(struct qnode* head,int x);
struct qnode* push(struct qnode* head,int x);
void printer(struct qnode *head);

struct qnode{
	int data;
	struct qnode* next;
};

struct qnode* enqueue(struct qnode* head,int x)
{
	struct qnode* ptr = (struct qnode*)malloc(sizeof(struct qnode));
	struct qnode* temp;
	temp = head;
	ptr->data = x;
	ptr->next = NULL;
	if(temp == NULL)
	{
		temp = ptr;
		return head;
	}
	else
	{
		while(temp->next !=NULL)
		{
			temp = temp->next;
		}
		temp = ptr;
		return head;
	}
}

struct qnode* deqeue(struct qnode* head)
{
	return head->next;	
}

struct qnode* push(struct qnode* head,int x)
{
	head = enqueue(head,x);
	return head;
}
struct qnode* pop(struct qnode* head)
{
	deqeue(head);
	return head;
}

void printer(struct qnode *head)
{
	struct qnode* temp = head;
	while(temp){
		printf("%d\n",temp->data);
		temp = temp->next;

	}

}
int main(void) {

	struct qnode* head = NULL;
	head = push(head,5);
	head = push(head,6);
	head = push(head,7);
	head = push(head,8);
	printer(head);
}
