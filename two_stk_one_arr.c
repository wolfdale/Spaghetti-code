#include<stdio.h>
#define max_stack 10
int top1=-1;
int top2=max_stack;
int a[max_stack];

void main()
{
    int n;
    do{
        printf("\nPush in Stack 1\n");
        printf("Push in stack 2\n");
        printf("Pop from stack 1\n");
        printf("Pop from stack 2\n");
        printf("Display both Stack\n");
        printf("Exit\n");
        scanf("%d",&n);
        switch(n){
            case 1:{push1();break;}
            case 2:{push2();break;}
            case 3:{pop1();break;}
            case 4:{pop2();break;}
            case 5:{display();break;}
            case 6:{break;}
        }
    }while(n!=6);

}


void push1()
{
    int item;
    printf("Enter item\n");
    scanf("%d",&item);
    if(top1 != (top2-1) )
    {
        top1++;
        a[top1]=item;
    }
    else{printf("Stack 1 is full\n");}
}


void push2()
{
    int item;
    printf("Enter item\n");
    scanf("%d",&item);
    if(top1 != (top2-1) )
    {
        top2--;
        a[top2]=item;
    }
    else{printf("Stack 2 is full\n");}
}

void pop1()
{
    if(top1<0)
    {
        printf("Stack 1 is Empty\n");
    }
    else{top1--;}
}

void pop2()
{
    if(top2>=max_stack)
    {
        printf("Stack 2 is Empty\n");
    }
    else{top2++;}
}

void display()
{
    if(top1<0)
    {
        printf("Stack 1 is empty\n");
    }
    else
    {
        int j;
        printf("Stack 1");
        for(j=0;j<=top1;j++)
        {
            printf("\n%d\n",a[j]);
        }
    }

    if(top2>=max_stack)
    {
        printf("Stack 2 is empty\n");
    }
    else{
        int j;
        printf("Stack 2");
        for(j=max_stack-1;j>=top2;j--)
        {
            printf("\n%d\n",a[j]);
        }
    }
    return 0;
}
