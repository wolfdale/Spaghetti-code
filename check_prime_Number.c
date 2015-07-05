//check if number is prime or not

#include<stdio.h>
 int main()
 {
     int n,i;
     scanf("%d",&n);

     for(i=2;i<=(n-1);i++)
     {
         if(n%i==0)
         {
             printf(" Not Prime");
             break;
         }
     }
     if(n==i){
        printf("Its a prime number");
        }
    return 0;
 }
