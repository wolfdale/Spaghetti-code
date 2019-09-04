#include<stdio.h>

int main()
{
    int temp,count=0,result,n;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {

        count++;
        temp=temp/10;
    }

    result=rev(n,count);
    printf("%d",result);
    return 0;
}

int rev(int num,int len)
{
    if(len==1)
    {
        return num;
    }
    else{return(num%10*pow(10,len-1)+rev(num/10,--len));}
}


