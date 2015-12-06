#include<stdio.h>


struct book{
    int id;
    char name[20];

};
int main()
{
    struct book b1;
    scanf("%d",&b1.id);
    scanf("%s",b1.name);
    printf("%d\n",b1.id);
    printf("%s\n",b1.name);
    print_struct(b1);
    return 0;
}

void print_struct(struct book  x)
{
    printf("In function\n");
    printf("%d\n",x.id);
    printf("%s\n",x.name);
}
