#include <stdio.h>
void seg(int a[],int n){
	int i=0;
	int j=n;
	int k;
	while(i<j){
		while(a[i]==0 && i<j){
			i++;
		}
		while(a[j]==1 && i<j){
			j--;
		}
		if(i<j){
			a[i]=0;
			a[j]=1;
			i++;j--;
		}
	}
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
}
int main(void) {
	int a[10]={0,0,0,0,0,0,1,1,1,1};
	seg(a,10);
	
	return 0;
}
