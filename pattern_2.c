#include<stdio.h>

void main()
{
    int n,i,j;
    printf("Enter even number");
    scanf("%d",&n);

    for(i=1;i<=n/2;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");


    }
    for(i=n/2;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");

    }
    return 0;

}
