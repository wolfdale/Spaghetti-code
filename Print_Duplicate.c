//Print all Duplicates in a string
#include<stdio.h>
#define NO_OF_CHAR 256
int *CharCountArray(char *str)
{
    int i;
    int *count;
    count=(int*)calloc(sizeof(int),NO_OF_CHAR);
    for(i=0;*(str+i);i++)
    {
        count[*(str+i)]++;
    }
    return count;
}


void PrintDup(char *str)
{
    int i;
    int *count;
    count=CharCountArray(str);
    for(i=0;i<NO_OF_CHAR;i++)
    {
        if(count[i]>1)
        {
            printf("%c is repeated %d extra times\n",i,(count[i]-1));
        }
    }
    free(count);
}

int main()
{
    char str[]="aaabbbcqqwwrrrrffdgdsgs";
    PrintDup(str);
    return 0;
}
