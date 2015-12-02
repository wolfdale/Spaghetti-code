#include<stdio.h>

void main()
{
    char str1[50],str2[10];
    int i=0,j=0,occ;
    gets(str1);
    gets(str2);
    while(str1[i]!='\0')
    {
        while(str1[i] != str2[0]&& str1[i]!='\0')
        {
            i++;
        }
        occ=i;
        while( str2[j] == str1[i] && str2[j]!='\0' && str1[i] != '\0')
        {
            i++;
            j++;
        }
        if(str2[j]=='\0')
        {
            printf("Matched at %d",occ);
            break;
        }
        i=occ+1;
        j=0;

    }

}
