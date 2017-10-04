#include <stdio.h>
void seg(int a[],int n){
	int i=0;
	int j=n;
	int k;
	while(i<j){
		while(a[i]%2==0 && i<j){
			i++;
		}
		while(a[j]%2==1 && i<j){
			j--;
		}
		if(i<j){
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;j--;
		}
	}
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
}
int main(void) {
	int a[10]={2,2,2,5,8,1,1,4,1};
	seg(a,8);
	
	return 0;
}
