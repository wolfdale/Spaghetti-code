//[2015-07-06] Challenge #222 [Easy] Balancing Words

#include <stdio.h>
#include<string.h>
int load(int ,char );
int main()
{
    char str[100];
    int i=0,t,flag=1,n,sumrt,sumlt;
    gets(str);
    n=strlen(str)-1;
    while(str[i]!='\0')
    {
        //printf("\n%c%d\n",str[i],i);
        sumrt=0;
        sumlt=0;
        t=i-1;
        while(t>=0)
        {   sumlt=sumlt+load((i-t),str[t]);
            t--;
        }
        t=i+1;
        while(t<=n)
        {
            sumrt=sumrt+load((t-i),str[t]);
            t++;
        }

        if(sumlt==sumrt)
        {
            printf("%c is balance from both sides with Balance factor %d\n",str[i],sumrt);
            flag=0;
        }
        i++;
    }
    if(flag=1){printf("No Such word found!");}


return 0;

}

int load(int i,char x)
{
    int acii;
    acii=x;
    acii=acii-64;
   // printf("%d\n",acii);
    return(i*acii);
}
