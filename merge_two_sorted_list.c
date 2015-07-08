/*Program to merge two sorted linked lists*/
#include<stdio.h>
#include<stdlib.h>


/* Link list node */
struct node
{
    int data;
    struct node* next;
};



/* Takes two lists sorted in increasing order */
struct node* SortedMerge(struct node* list1, struct node* list2)
{
    struct node *head,*temp;
    if(list1==NULL) return(list2);
    if(list2==NULL) return(list1);

    if(list1->data < list2->data)
    {
        head=list1;

    }
    else{
        head=list2;
        list2=list1;
        list1=head;
    }
    while(list1->next!=NULL && list2!=NULL)
    {
        if(list1->next->data>list2->data)
        {
            temp=list1->next;
            list1->next=list2;
            list2=temp;
        }
        else{
            list1=list1->next;
        }

    }
    if(list1->next==NULL){list1->next=list2;}
    return(head);

}



/* Function to insert a node at the beginging of the linked list */
void push(struct node** head_ref, int new_data)
{
  /* allocate node */
  struct node* new_node =
            (struct node*) malloc(sizeof(struct node));

  /* put in the data  */
  new_node->data  = new_data;

  /* link the old list off the new node */
  new_node->next = (*head_ref);

  /* move the head to point to the new node */
  (*head_ref)    = new_node;
}

/* Function to print nodes in a given linked list */
void printList(struct node *node)
{
  while(node!=NULL)
  {
   printf("%d ", node->data);
   node = node->next;
  }
}

/* Drier program to test above functions*/
int main()
{
  /* Start with the empty list */
  struct node* res = NULL;
  struct node* a = NULL;
  struct node* b = NULL;

  /* Let us create two sorted linked lists to test the functions
   Created lists shall be a: 5->10->15,  b: 2->3->20 */
  push(&a, 15);
  push(&a, 10);
  push(&a, 5);

  push(&b, 20);
  push(&b, 3);
  push(&b, 2);

  /* Remove duplicates from linked list */
  res = SortedMerge(a, b);

  printf("\n Merged Linked List is: \n");
  printList(res);

  getchar();
  return 0;
}
