#include<stdio.h>
void main()
{
    const volatile int var=10;
    int *ptr=&var;
    printf("Intital value %d\n",var);
    *ptr=100;
    printf("Changed Value %d",var);
}
