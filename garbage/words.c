#include<stdio.h>

void main()
{
    char str[50];
    int i=0,count=1;//By default only one word exists
    int in=1,out=0;
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            out=1;
        }
        else
        {
            if(out==1)
            {
                count++;
                out=0;
            }

        }
        i++;
    }
    printf("Total Number of words : %d",count);
}
