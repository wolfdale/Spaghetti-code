#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct align_pointer{
	struct node *front;
	struct node *mid;
	struct node *end;
};

struct node* insert_to_front(struct node* head, int item,struct align_pointer *list_align)
{
	struct node *ptr;
	ptr = (struct node*)malloc(sizeof(struct node));
	ptr -> data = item;
	ptr -> next = NULL;
	
	if(head==NULL)
	{
		head = ptr;
		list_align -> front = head;
		printf("%d\n",list_align->front->data);
		list_align -> mid = head;
		list_align -> end = head;
	}
	else
	{
		ptr->next = head;
		head = ptr;
		list_align -> front = head;
		struct node* temp1 = NULL;
		printf("%d\n",list_align->front->data);
		struct node* temp2 = NULL;
		temp1 = head;
		temp2 = head;
		if(temp2->next != NULL && temp2->next->next !=NULL){

			temp2 = temp2->next->next;
			while(temp2 != NULL)
			{
				temp2=temp2->next; 
				temp1=temp1->next;
			}
			list_align -> end = temp2;
			list_align -> mid = temp1;

			printf("%d\n",list_align->end->data);
			printf("%d\n",list_align->mid->data);
		}
		else if (temp2->next == NULL)
		{
			list_align -> front = head;
			printf("%d\n",list_align->front->data);
			list_align -> mid = head->next;
			list_align -> end = head->next;
		}
		else{
			
			list_align -> front = head;
			printf("%d\n",list_align->front->data);
			list_align -> mid = head->next;
			list_align -> end = head->next->next;
		}
	}
	return head;
}

struct node* insert_to_end(struct node* end, int item)
{
	struct node *ptr;
	ptr = (struct node*)malloc(sizeof(struct node));
	ptr -> data = item;
	ptr -> next = NULL;

	end->next = ptr;

}

int main()
{
	struct node *list = NULL;
	struct align_pointer list_align;
	int i ;
	for(i = 0; i< 5;i++)
	{
		list = insert_to_front(list , i,&list_align);
		printf("%d %d %d\n",list_align.front->data,list_align.mid->data,list_align.end->data);
	}
	return 0;

}




























