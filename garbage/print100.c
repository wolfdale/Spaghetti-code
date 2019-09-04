\\Print 100 without loop
#include<stdio.h>
void print_num(int n);

int main()
{
	print_num(100);
	return 0;
}

void print_num(int n)
{
	if(n<0)
	{
		return ;
	}
	printf("\n%d",n);
	
	print_num(n-1);

}
