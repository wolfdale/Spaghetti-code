//http://www.codechef.com/FEB15/problems/STFM   (Strange Formula)

#include <stdio.h>
void main(){

    int n,x,i,j,temp,sum=0;
    int arr[20];
    scanf("%d %d",&n,&x);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }

    for(j=0;j<n;j++){
        for(i=1;i<=arr[j];i++)
        {
            temp=i*(fact(i)+arr[j]);
            sum=sum+temp;
        }

        arr[j]=sum;
    }
    printf("\n\n%d",sum%x);
    return 0;
}

int fact(int n)
{
  if (n == 0)
    return 1;
  else
    return(n * fact(n-1));
}
