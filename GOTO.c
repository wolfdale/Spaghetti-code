#include<stdio.h>
int main(){
 int i=0;
inc:
 i+=1;
 if(i>10) goto wut;
 printf("%d\n",i);
 goto inc;
wut:
    printf("Program Completed !");
 return 0;
}
