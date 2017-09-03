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
void findMiddle(struct node *ref){
	struct node *fast = ref;
	struct node *slow = ref;
	while((fast !=NULL) && (fast->next !=NULL) ){
		fast = fast->next->next;
		slow = slow->next;
	}
	printf("Middle %d",slow->item);
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
	findMiddle(root);
	
	
	return 0;
}
