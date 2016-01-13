#include<stdio.h>

int main()
{
    int a[10];
    int temp[100];
    int k=0;
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            temp[k] = a[i] + a[j];
            k++;
        }

    }
    //output if input is 1 2 3 [1+1 1+2 1+3 2+2 2+3 3+3]
    printf("Output:");
    for(i=0;i<k;i++)
    {
        printf("\n%d\n",temp[i]);
    }
    return 0;

}
