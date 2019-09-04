/*Sorting two string and merging into single sorted word*/
#include<stdio.h>
#include<string.h>
int printchar(char ch,int times);
void main()
{
    int n,m,i,hash[26]={0};
    char str1[50],str2[50];
    gets(str1);
    gets(str2);
    n=strlen(str1);
    m=strlen(str2);


    for(i=0;i<n;i++)
    {
        if(str1[i]!='\0')
        {
            hash[str1[i]-'a']++;//Acii value of a=65
        }
    }
    for(i=0;i<m;i++)
    {
        if(str2[i]!='\0')
        {
            hash[str2[i]-'a']++;
        }
    }

    for(i=0;i<26;i++)
    {
        printchar(i+'a',hash[i]); //reconverting from acii value
    }
    return 0;
}

int printchar(char ch,int times)
{
    int i;
    for(i=0;i<times;i++)
    {
        printf("%c",ch);
    }
    return 0;

}

