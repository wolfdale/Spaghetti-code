/*
11111
2222
333
22
1
*/



#include<stdio.h>
int main(){
int i,j,k;
for(i=1;i<=5;i++){

        for(j=5;j>=i;j--)
        {
                printf("%d",i);
        }
        printf("\n");
}

return 0;

}
