#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;

};
struct node* start = NULL;

void main()
{
    int i;
    for(i=0;i<=5;i++)
    {
        insert(i);
    }
    trav();
    printf("\n");
    rev();
    trav();
}

void insert(int a)
{
    struct node* ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=a;
    ptr->next=NULL;
    if(start==NULL)
    {
        start=ptr;
    }
    else
    {
        ptr->next=start;
        start=ptr;
    }
}

void rev()
{
    struct node* prev=NULL;
    struct node* curr=start;
    struct node* nxt;

    while(curr != NULL)
    {

        nxt = curr->next;
        curr->next=prev;
        prev = curr;
        curr = nxt;

    }
    start=prev;






}

void trav()
{
    struct node* temp;
    temp=start;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
