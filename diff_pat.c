#include<stdio.h>
int main(){
	int i,j;
	int count = 11;
	int tem;
	for(i=4;i>=1;i--){
		count = count -i;
		tem = count;
		for(j=1;j<=i;j++){
			printf("%d",tem);
			tem++;
		}
		printf("\n");
	}
}
