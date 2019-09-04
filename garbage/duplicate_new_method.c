#include<stdio.h>
int main(){
	int main[100];
	int temp[100]={0};
	int i,n,j;
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		scanf("%d\n",&main[i]);
	}
	for(i=0;i<n;i++)
	{
		temp[main[i]]++;	
	}
	for(i = 0 ;i<100;i++){
		if(temp[i] > 1){
			printf("%d",i);
		}
	}
	return 0;
}


