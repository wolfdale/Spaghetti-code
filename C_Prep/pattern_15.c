#include<stdio.h>

int main(){
    int i,j,k;
    for(i=1;i<=5;i++){
        for(j=1;j<=6-i;j++){
                printf("*");
            }
        //2 Spaces
        for(k=1;k<i;k++){
            printf("  ");
        }
        for(j=1;j<=6-i;j++){
                printf("*");
            }
        printf("\n");
        }
    //NOTE start with i = 2
    for(i=2;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        for(k=1;k<=5-i;k++){
            printf("  ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }



    return 0;
}

