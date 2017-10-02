#include<stdio.h>
//o(n)complexity for [o(1) time complexity and o(n) space complexity -> use hashing ]
void extractunique(int a[],int n){
	int i;
	for(i=0;i<=n;i++){
		while(a[i]==a[i+1] && i<n-1){
			i++;
		}
		printf("%d\n",a[i]);
		
	}
}
int main(){
	//Sorted, otherwise o(nlogn) + o(n)
	int a[] = {1,2,3,4,4,4,5,5,8,8,8,9,10,10};
	
	extractunique(a,12);
	
	return 0;
}
