#include <stdio.h>
struct node{
	int key;
	struct node* next;
};
struct node* revalt(struct node* head,int k){
	struct node* curr = head;
	struct node* nxt;
	struct node* prev = NULL;
	int c = 0;
	while(c<k&&curr!=NULL){
		nxt = curr->next;
		curr->next = prev;
		prev = curr;
		curr = nxt;
		c++;
		
	}
	
	head->next = revalt(nxt,k);
	return prev;
	
}
int main(void) {
	// your code goes here
	return 0;
}
