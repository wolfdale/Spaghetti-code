#include<stdio.h>

void main()
{
    int n,i,j,hook;
    printf("Enter Total Nos. Lines");
    scanf("%d",&n);
    hook=1;
    for(i=1;i<=n;i=i+2)
    {
        for(j=1;j<=4;j++)
        {
            printf("%d",hook);
            hook++;
        }
        printf("\n");
        hook=hook+3;
        for(j=1;j<=4;j++)
        {
            printf("%d",hook);
            hook--;
        }
        hook=hook+5;
        printf("\n");

    }


    return 0;

}
