#include<stdio.h>

int main()
{
 int a[4][4],i,j,b;

 for(i=0;i<4;i++)
 {
  printf("\nEnter elements of %d row of Matrix: ",i+1);
  for(j=0;j<4;j++)
   scanf("%d",&a[i][j]);
 }

 for(i=0;i<4;i++)
 {
  for(j=0;j<4;j++)
  {
    b = a[i][j];
    a[i][j]=a[j][i];
    a[j][i]=b;
  }
 }

 printf("\nTransposed Matrix:\n\n");
 for(i=0;i<4;i++)
 {
  for(j=0;j<4;j++)
   printf("%4d",a[i][j]);
  printf("\n");
 }
 return 0;

}
