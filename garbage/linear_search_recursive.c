//linear search recursive

#include<stdio.h>
void main(){
    int a[100],i,index,n,num;
    printf("Enter the size of array");
    scanf("%d",&n);

    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
      }
    printf("Enter number to be searched");
    scanf("%d",&num);
    index=linear(a,0,n-1,num);
    if(index==-1){printf("element not found");}
    else printf("%d is at %d position",num,index+1);


}

int linear(int a[],int s,int e,int num){
    if(s>e)
        return -1;
    if(a[s]==num)
        return s;
    else linear(a,s+1,e,num);
}
