#include<stdio.h>
int main(){
int i,j;
for(i=1;i<=7;i++){
        for(j=1;j<=8-i;j++){
                printf("%d",j);
        }
        printf("\n");
}
return 0;

}
