//reverse String using stack

#include<stdio.h>
#include<stdio.h>
#include<string.h>

struct node{
    char data;
    struct node *link;
};
struct node *top=NULL;

void main(){
    int i,n;
    char str[100];
    gets(str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        push(str[i]);
    }
    for(i=0;i<n;i++)
    {
        pop(str[i]);

    }
    return 0;


}

void push(char a){
    struct node *ptr;

    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=a;
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
        printf("%c",ptr->data);
        top=top->link;
        free(ptr);
    }
}
