#include<stdio.h>
#include<string.h>
int main(){
	char x[100];
	while(1){
		scanf("%s",x);
		if(strcmp(x,"ABC")){
			printf("Done");
			break;
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}	
		
