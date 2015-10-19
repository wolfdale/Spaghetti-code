#include <stdio.h>

int main()
{
   int j,temp,row,n;

   printf("Enter the number of rows ");
   scanf("%d",&n);
   temp=0;
   for ( row = 1 ; row <= n ; row++ )
   {
       for(j=1;j<=n-row;j++)
       {
           printf(" ");

       }
       for(j=1;j<=row+temp;j++)
       {
           printf("*");
       }
        temp++;
       for(j=1;j<=n-row;j++)
       {
           printf(" ");

       }
       printf("\n");
   }

   return 0;
}
