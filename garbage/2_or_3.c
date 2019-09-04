#include<stdio.h>

void main()
{
    int i;
 for(i=1;i<=100;i++)
 {
     if(i%2==0)
     {
        if( (i%2==0) && (i%3==0) )
        {
        
            printf("RED BALLON\n");
        
        }
         printf("RED\n");

     }
     else if(i%3==0)
     {

         printf("BALLON\n");
     }
    else
     {
         printf("%d\n",i);
     }
 }
 return 0;

}
