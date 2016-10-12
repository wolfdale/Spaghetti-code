#include<stdio.h>
void nge(int a[] , int n);

void nge(int a[] , int n)
{
	int i,k,flag=-1;
	for(i=0;i<n;i++)
	{
		for(k=i+1;k<n;k++)
		{
			if(a[i] < a[k])
			{
				flag = a[k];
				break;
			}
		}
		printf("%d---->%d\n",a[i],flag);
	}
}
int main(int argc, char** argv){
	int a[100],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d\n",&a[i]);
	}
	
	nge(a,n);
}
