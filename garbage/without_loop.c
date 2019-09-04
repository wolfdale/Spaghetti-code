#include<stdio.h>

void main()
{
    printf("Printing Numbers 1 to 100\n");
    print(100);


}
void print(int a)
{
    if(a == -1)
    {
        return;
    }
    else{
        printf("%d\n",a);
        a--;
        print(a);
    }

}
