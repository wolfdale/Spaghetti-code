#include <stdio.h>

int main()
{
   int j,row,n;

   printf("Enter the number of rows ");
   scanf("%d",&n);

   for ( row = 1 ; row <= n ; row++ )
   {
       for(j=1;j<=n-row;j++)
       {
           printf(" ");

       }
       if(row==1)
       {
           printf("*");
       }
       else{
       for(j=1;j<=row-1;j++)
       {
                printf("*A");
        }
       printf("*");
       }
      for(j=1;j<=n-row;j++)
       {
           printf(" ");

       }
       printf("\n");
   }

   return 0;
}
