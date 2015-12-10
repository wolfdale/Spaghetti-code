#include<stdio.h>
void fun(int a);
int main()
{
    void (*ptr)(int );
    ptr=&fun;
    ptr(10000);


}

void fun(int a)
{
    printf("%d",a);

}
