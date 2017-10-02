#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node* next;
};
void insert (struct node**ref,int item){
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	if(*ref == NULL){
		*ref = newnode;
		newnode->data=item;
	}
	else{
		newnode->next = *ref;
		*ref = newnode;
		newnode->data = item;
	}
	
}

struct node* reverse(struct node* head){
	struct node* prev = NULL;
	struct node* curr = head;
	struct node* next;
	
	while(curr!=NULL){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
		
	}
	return prev;
	
}

void removedup(struct node** ref){

	struct node* curr = *ref;
	struct node* temp;
	while(curr->next !=NULL){
		if(curr->data == curr->next->data){
			temp = curr->next->next;
			free(curr->next);
			curr->next = temp;
		}
		else{
			curr = curr->next;
		}
	}
}	
void printer(struct node* ref){
	
		struct node* temp = ref;
		
		while(temp != NULL){
			printf("%d->",temp->data);
			temp = temp->next;
		}
		printf("\n");
	
}

int main(void) {
	struct node* head = NULL;
	insert(&head,1);
	insert(&head,1);
	insert(&head,1);
	insert(&head,1);
	insert(&head,1);
	insert(&head,1);
	insert(&head,1);
	insert(&head,1);
	insert(&head,1);
	insert(&head,1);
	insert(&head,1);
	
	insert(&head,2);
	insert(&head,3);
	insert(&head,4);
	insert(&head,5);
	insert(&head,6);
	insert(&head,7);
	insert(&head,7);
	
	printer(head);
	head = reverse(head);
	printer(head);
	return 0;
}
