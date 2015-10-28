//Remove “b” and “ac” from a given string in single pass
#include<stdio.h>

int main()
{
    int i=0,j=0,flag=0;
    char str[100];
    gets(str);

    while(str[i]!='\0')
    {
        flag=0;
        if(str[i]=='b')
        {
            j++;
            flag=1;
            i++;
        }
        if(str[i]=='a')
        {
            if(str[i+1]=='c')
            {
                flag=1;
                j=j+2;
                i=i+2;
            }
        }
        if(flag==0){
        printf("%c",str[j]);
        j++;
        i++;
        }
    }
    return 0;

}
