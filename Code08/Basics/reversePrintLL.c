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
void findmid(struct node* head){
	struct node*slow = head;
	struct node*fast = head;
	while(fast !=NULL && fast->next != NULL){
		fast = fast->next->next;
		slow = slow ->next;
	}
	printf("MID->%d\n",slow->item);
}
void findkthlast(struct node* head,int k){
	struct node*ref = head;
	struct node*main = head;
	int c=0;
	while(c<k){
		if(ref == NULL){
			printf("Not Available");		
		}
		ref = ref->next;
		c++;
	}
	while(ref != NULL){
		ref = ref->next;
		main = main->next;
	}
	printf("%dth from last %d is",k,main->item);
}
void revprint(struct node* root){
	if(root==NULL){
		return ;
	}
	revprint(root->next);
	printf("%d ",root->item);
}
int main(void) {
	struct node * root = NULL;
	insert(&root,1);
	insert(&root,2);
	insert(&root,3);
	insert(&root,4);
	insert(&root,5);
	insert(&root,6);
	insert(&root,7);
	struct node * temp = root;
	while(temp!=NULL){
		printf("%d\n",temp->item);
		temp=temp->next;
	}
	findmid(root);
	findkthlast(root,3);
	printf("\n");
	revprint(root);
	return 0;
}
