/*The minimum number of moves required to solve a Tower of Hanoi puzzle is 2n - 1, where n is the number of disks.*/

#include<stdio.h>
int main(){
    int n,co;
    char a,b,c;
    scanf("%d",&n);
    co=tower(n,'a','b','c');
    printf("%d",co);
    return 0;
}

int tower(int n,char beg, char end, char aux){
    static int count=0;
    if (n==1){
        count=count+1;
        }
    else{
        tower(n-1,beg,aux,end);

        tower(1,beg,end,aux);

        tower(n-1,aux,end,beg);
    }
    return(count);
}
