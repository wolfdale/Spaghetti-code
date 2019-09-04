#include<string.h>
#include <stdio.h>
void main()
{
    char str[10]="newyork12";
    int i=0;
    int j,n;
    printf("%d\n",strlen(str));
    do{

        for(j=0;j<=i;j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
        i++;
    }while(i<strlen(str));

    n=strlen(str);
    do{
        for(j=0; j<=n; j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
       n--;
    }while(n>=0);
}
