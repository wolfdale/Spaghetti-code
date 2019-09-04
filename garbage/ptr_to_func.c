#include<stdio.h>
#include<stdlib.h>

void fun(int a)
{
    printf("The value of a  : %d\n",a);

}

void main()
{

    void (*fun_ptr)(int)=&fun;

    fun_ptr(10);

    return 0;


}
