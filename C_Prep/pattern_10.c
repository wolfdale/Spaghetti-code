/*
5432*
543*1
54*21
5*321
*4321
*/

#include<stdio.h>
int main(){
int i,j,k;
for(i=1;i<=5;i++){

        for(j=5;j>=1;j--)
        {
                if(j==i)
                {
                        printf("*");
                }
                printf("%d",j);
        }
        printf("\n");
}

return 0;

}
