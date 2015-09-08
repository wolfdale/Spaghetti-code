#include <stdio.h>
void selection(int a[],int n);
void swap(int *a, int *b);
int min(int a[],int n,int i);
void main()
{
	int n,a[50],i;
	printf("Enter the number of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	selection(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}

void selection(int a[],int n)
{
	int i,index;
	for(i=0;i<n;i++)
	{
		index=min(a,n,i);
		swap(&a[index],&a[i]);
	}

}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int min(int a[],int n,int i)
{
	int ele,x;
	ele=i;
	for(x=i;x<n;x++)
	{
		if(a[ele]>a[x])
		{
			ele=x;
		}
	}
	return ele;
}

