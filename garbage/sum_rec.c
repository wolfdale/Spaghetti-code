#include<stdio.h>

void main()
{
    int i,res,n,a[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    i=0;
    res=sum(a,i,n);
    printf("%d",res);
}

int sum(int a[],int i,int n)
{
    static int su=0;
    if(i==n)
    {
        return(su);

    }
    else{

        su=su+a[i];
        sum(a,i+1,n);
    }
}
