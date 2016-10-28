#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};
	
struct node* insert(struct node* ref, int item);

struct node* insert(struct node* ref, int item)
{
	struct node* ptr;
	struct node* temp = ref;
	ptr = (struct node*)malloc(sizeof(struct node));
	ptr->data = item;
	ptr->next = NULL;
	if(ref == NULL){
		ref = ptr;
		ptr -> next = ref;
		return ref;
	}
	else{
		ptr->next = ref;
		ref = ptr;
		return ref;
	}
}
void print(struct node* ref){
	struct node* temp;
	temp = ref;
	while(temp->next != ref){
		printf("%d\n",temp->data);
		temp=temp->next;

	}
}

int main(int argc, char** argv){
	
	struct node* start;
	start = NULL;
	start = insert(start,5);

	start = insert(start,6);
	start = insert(start,7);
	start = insert(start,8);
	start = insert(start,9);

	print(start);
	return 0;
}




