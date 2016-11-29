#include<iostream>
#include<ctype.h>
#include<cstdio>
#include<cstring>
using namespace std;
int main(){
	char str[100];
	cin.getline(str,100);	
	int i=0,sum = 0;
	while(str[i]!='\0'){
		if(isdigit(str[i])){
			int x = str[i]-'0';
			sum = sum + x;
		}
		i++;
	}
	cout<<sum;

}









