/*Most Frequent Element in a Sequence*/
#include<stdio.h>

int main()
{
    int a[100],n,i,j;
    int count,max_count,max_index;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    max_count=0;
    max_index=0;
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=i;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;

            }
        }
        if(count>max_count)
        {
            max_count=count;
            max_index=i;

        }
    }
    printf("%d is the max repeated",a[max_index]);

}








