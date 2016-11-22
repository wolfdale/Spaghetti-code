#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fp;
	char buffer[100];
	fp = fopen("./config","r");
	while(1){
		if(fgets(buffer,150,fp)==NULL)break;
	//	if(strcmp(buffer[0], '#',1)==0)continue;
		
		printf("%c",buffer[0]);
	}






}



