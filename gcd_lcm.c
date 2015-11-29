#include<stdio.h>

int main()
{
    int a,b,x,y;
    scanf("%d%d",&a,&b);
    x=a;
    y=b;
    while(a != b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else{b=b-a;}
    }

    printf("GCD is %d\n",a);
    printf("LCM is %d",(x*y)/a);
}
