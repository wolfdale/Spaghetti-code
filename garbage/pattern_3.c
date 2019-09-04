#include<stdio.h>

void main()
{
    int n,i,j;
    printf("Enter even number");
    scanf("%d",&n);
    /*FOR UPPER HALF*/
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");


    }
    /* FOR POINTED NOSE OF TRIANGLE */
    for(i=0;i<=n;i++)
    {
        printf("*");
    }
    printf("\n");
    /*FOR LOWER HALF*/
    for(i=n;i>=0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;

}
