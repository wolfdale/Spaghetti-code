#include<stdio.h>

void main()
{
    char str[50];
    int arr[26]={0};
    int i=0;
    gets(str);
    while(str[i]!='\0')
    {

        arr[str[i]-'a']++;
        i++;
    }

    for(i=0;i<26;i++)
    {
        
        print(i+'a',arr[i]);
    }

}

void print(char x, int time)
{
    int i;
    for(i=0;i<time;i++)
    {
        printf("%c",x);
    }
    return 0;
}
