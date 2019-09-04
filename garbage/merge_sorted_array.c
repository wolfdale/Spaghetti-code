//Merge two Sorted Arrays

#include<stdio.h>
void main()
{
    int l,i,r,n,m,a[50],b[50];

    printf("Enter the size of first array");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the size of second array");
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }

    int c[n+m];
    l=0;
    r=0;
    for(i=0;i<m+n;i++)
    {
        if(l<n && r<m){
          if(a[l]>b[r]){
              c[i]=b[r];
              r++;
          }
          else{
             c[i]=a[l];
             l++;
           }
        }
        else if(l==n){
            c[i]=b[r];
            r++;

        }
        else
            { c[i]=a[l];
           l++;
          }
    }

    for(i=0;i<m+n;i++)
    {
        printf("%d\n",c[i]);
    }

}
