#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{
    int a[100];
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    i=0;
    j=n-1;


    while(i<j)
    {

        if(a[i]>a[j])
        {
            swap(&a[i],&a[j]);
            i++;j--;

        }
        else if(a[i]==a[j]&&a[i]==0)
        {
            swap(&a[i+1],&a[j]);
            i++;

        }
        else {
            swap(&a[i],&a[j-1]);
            j--;
        }

    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}
