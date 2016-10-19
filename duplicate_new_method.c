#include<stdio.h>
int main(){
	int main[1000];
	int temp[100]={0};
	int i,n,j;
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		scanf("%d\n",&main[i]);
	}
	for(i=0;i<n;i++)
	{
		if(temp[main[i]] != main[i])
		{
			temp[main[i]]=main[i];	
		}
		else
		{
			printf("Dup-> %d\n",main[i]);
		}
	}
	return 0;
}


