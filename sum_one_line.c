\\sum of digits in one line

#include<stdio.h>
int sum(int n);

int main()
{	
	int n;
	scanf("%d",&n);
	printf("%d", sum(n) );
	return 0;
}

int sum(int n)
{
	int sum;
	for(sum=0 ; n>0; sum+=n%10,n/=10); 
	return sum;
}
