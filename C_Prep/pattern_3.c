/*12345
4321
123
21
1
*/


#include<stdio.h>
int main(){
int i,j;
for(i=1;i<=5;i++){
        if(i%2!=0){
                for(j=1;j<=6-i;j++){
                printf("%d",j);
                }
        }
        else{
                for(j=6-i;j>=1;j--){
                        printf("%d",j);

                }
        }
        printf("\n");
}
return 0;

}
