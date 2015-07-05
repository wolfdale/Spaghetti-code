//Decimal to binary

#include<stdio.h>

int main()
{
  int n,c,k;
  printf("Enter a decimal number");
  scanf("%d",&n);

  for(c=31;c>=0;c--)   //32 bit
  {
      k=n>>c;  //right shift
      if(k&1)
      {
          printf("1");

      }
      else
        printf("0");
  }
  return 0;

}
