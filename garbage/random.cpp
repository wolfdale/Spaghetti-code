#include<iostream>
#include<ctype.h>


int main(){
	char str[100];
	int i=0;
	int f_l=0,f_u=0,f_d=0,f_s=0;
	std::cin >> str;
	while(str[i] != '\0')
	{
		if(isupper(str[i]))
		{
			f_u = 1;
		}
		if(islower(str[i]))
		{
			f_l = 1;
		}
		if(isdigit(str[i]))
		{	
			f_d = 1;
		}	
		if(str[i] == '#' || str[i] == '$' || str[i] == '@' )
		{
			f_s = 1;
		}
		i++;
	}
	if((f_s == 1 && f_l == 1 && f_u == 1 && f_d == 1) && ((i>=6) && (i<=12))){
		std::cout << "valid";
	}
	else{
		std::cout << "invalid";
	}

}


