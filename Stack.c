//Implementation of stack(linked List)

#include<stdio.h>
#include<stdio.h>

struct node{
    int data;
    struct node *link;
};
struct node *top=NULL;

void main(){

    int a;
    do{
        printf("Enter choice");
        scanf("%d",&a);

        switch(a){
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: popall();
                    printf("EXIT");
                    break;

        }
    }    while(a!=4);

}

void push(){
    struct node *ptr;
    int n;
    printf("Enter Number\n");
    scanf("%d",&n);
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=n;
    ptr->link=NULL;
    if(top==NULL){
        top=ptr;
    }
    else{
        ptr->link=top;
        top=ptr;
    }
}
void pop(){
    struct node *ptr;
    if(top==NULL){
        printf("Stack is empty\n");
    }
    else {
        ptr=top;
        printf("Item to be deleted %d\n",ptr->data);
        top=top->link;
        free(ptr);
    }
}

void display(){

    struct node *ptr;
    ptr=top;
    if(top==NULL){printf("Stack is Empty\n");}
    while(ptr!=NULL){
            printf("%d\n",ptr->data);
            ptr=ptr->link;
        }
}


void popall(){
    struct node *ptr;
    printf("Poping all Elements to free space\n");
    if(top==NULL){printf("Stack is Empty\n");}
    while(top!=NULL){
        ptr=top;
        top=top->link;
        printf("Item being deleted %d\n",ptr->data);
        free(ptr);
    }
    free(top);
}
