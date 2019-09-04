//multiples of 3 and 5 below 1000

#include <stdio.h>
int main()
{
    long int sum=0,i,flag;
    for(i=1;i<1000;i++)
    {
        flag=1;
        if((i%3)==0)
        {
            flag=0;
            sum=sum+i;
        }
        else if(((i%5)==0) && flag==1)
        {
            sum=sum+i;
        }
        
    }
    printf("%ld",sum);
    return 0;
}
