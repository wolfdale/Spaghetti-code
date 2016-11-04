/*
1 
2 6 
3 7 10 
4 8 11 13 
5 9 12 14 15
*/
#include<stdio.h>
int main(){
int i,j,k;
for(i=1;i<=5;i++){
        k=i;
        for(j=1;j<=i;j++){
                printf("%d",k);
                k = k + 5 - j;
        }
        printf("\n");
        }
return 0;

}

