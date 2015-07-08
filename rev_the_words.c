//reverse the words of string

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void push(char);
void pop_till_empty(void);
struct node{
    char data;
    struct node *link;
};
struct node *top=NULL;

void main(){
    int i;
    char str[100];
    gets(str);
    i=strlen(str);
    i=i-1;
    while(i>=0)
    {
        while(str[i]!=' ')
        {
            push(str[i]);
            i--;
        }
        pop_till_empty();
        printf("%c",str[i]);
        i--;

    }
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
void pop_till_empty()
{
    struct node *ptr;
    while(top!=NULL){
    ptr=top;
    printf("%c",ptr->data);
    top=top->link;
    free(ptr);

    }

}













