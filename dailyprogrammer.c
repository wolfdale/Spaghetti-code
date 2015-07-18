/*[2015-07-13] Challenge #223 [Easy] Garland words*/

#include<stdio.h>
#include<string.h>

void main()
{
    int i,j,n,deg=0;
    char str[100];
    gets(str);
    n=strlen(str);
    i=0;//first character
    j=1;//second character
    while(j<n)
    {
        if(str[i]==str[j])
        {
            deg++;
            i++;
        }
        else
        {
            deg=0;
            i=0;
        }
        j++;
    }
    printf("%d",deg);
    return 0;
}
