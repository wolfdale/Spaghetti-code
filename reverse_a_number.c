//OffBeat logic


#include<stdio.h>
void main(){
    int temp,i,n,a[100];
    scanf("%d",&n);
    i=0;
    while(n!=0){
        temp=n%10;
        n=n/10;
        a[i]=temp;
        i++;
    }
    n=i;
    i=0;
    while(i<n){
        printf("%d",a[i]);
        i++;
    }
}
