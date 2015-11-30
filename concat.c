/*concat two strings*/
#include<stdio.h>

void main()
{
    char str1[10],str2[10],str3[30];
    int i=0,j=0;
    gets(str1);
    gets(str2);
    while(str1[i]!='\0')
    {

        str3[i]=str1[i];
        i++;
    }
    while(str2[j]!='\0')
    {
        str3[i]=str2[j];
        i++;
        j++;

    }
    str3[i+1]='\0';
    puts(str3);
    return 0;
}
