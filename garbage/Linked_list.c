#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

typedef struct node* Node;

/*    Function to load the numbers onto the linked list
      Return a pointer to the head of the list  */
Node loadNum();

/*    Function to print the number in position pos
      head is guaranteed to be non-NULL */
/*    Function to print the number in position pos
      head is guaranteed to be non-NULL */
void printNum(Node head,int pos)
{
    int i = 1;
    Node temp = head;
    while( i != pos ){
   	 temp = temp->next;
   	 if( temp == NULL){
   		 printf("-1");
   		 return;
   	 }
   	 i++;
    }
    printf("%d",temp->data);
}


/* Function to release the memory after every iteration */
void releaseMem(Node head);

int main()
{
    int i,T;
    int pos;
    Node head;
    scanf("%d",&T);
    for (i = 0; i < T; i++){

   	head = loadNum();
   	scanf("%d",&pos);
   	printNum(head, pos);
        if(i<T-1)
          printf("\n"); // Will add a new line for after all output
                        // except for last.
   	releaseMem(head);
    }
    return 0;
}




/*    Function to load the numbers onto the linked list
      Return a pointer to the head of the list  */
Node loadNum(){
    Node head,ptr,temp;
    head=NULL;
    do{
        ptr=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&ptr->data);
        printf("hello");
        ptr->next=NULL;

        if(head==NULL)
         {
           head=ptr;
         }
        else{
            temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=ptr;
        }


   }while(ptr->data != -1);
   return (head);
}

/* Function to release the memory after every iteration */
void releaseMem(Node head){
    Node prev=head;
    while(head!=NULL){
        head=head->next;
        free(prev);
        prev=head;
    }
    free(head);

}





