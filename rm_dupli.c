#include<stdio.h>

void main()
{
    char str[50];
    int i=0,j,hash[26]={0};
    gets(str);
    while(str[i]!='\0')
    {
        hash[str[i]-'a']++;
        i++;

    }
    for(i=0;i<26;i++)
    {
        if(hash[i]>0){
        printf("%c",i+'a');
        }
    }
}
