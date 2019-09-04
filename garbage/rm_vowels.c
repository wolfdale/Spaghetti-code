#include<stdio.h>

void main()
{
    char str[50];
    int i=0,j;
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            j=i;
            while(str[j]!='\0')
            {
                str[j]=str[j+1];
                j++;
            }
            str[j-1]='\0';

        }
        else{
            i++;
        }


    }
    puts(str);


}
