//o(n)
#include<stdio.h>

#define MAX 10000

void findPair(int data[],int n,int sum){
	int hash[MAX]={0};
	int i;
	for(i=0;i<n;i++){
		int temp = sum - data[i];
		if(temp>0&& hash[temp]==1){
			printf("Pair Found sum :%d, %d ,%d\n",sum,data[i],temp);
		}
		hash[data[i]] = 1;
	}
}

int main(){
	
	int a[10]={1,2,3,4,5,6,7,8,9,2};
	
	findPair(a,10,4);
	
	
	
	
}


