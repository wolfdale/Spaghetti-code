#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;
int main(int argc, char** argv)
{
	char str[50];
	char out[50];
	char out2[50];
	cin >>	str;
	int i = 0;
	int flag = 0;
	int counter = 0;

	while(str[i] != '\0')
	{	
		counter++;
		if (counter > 8)
		{
			
			printf("Exceeded Limit");
			return 0;
		}

		if(!isalpha(str[i]) && !isdigit(str[i]))
		{
			printf("Invalid String");
			return 0;
		}	

		
		if(str[i] == 'Z')
		{
			flag = 1;		
			out[i] = '#';
		} 	
	
		if(str[i] == '0')
		{
			flag = 1;
			out[i] = '$';
		}
	

		if(flag == 0)
		{
			out[i] = str[i];
		}
		flag = 0;
		i++;
	}		

	i = 0;
   	int j = strlen(str) - 1;
 	char temp;
   	while (i < j) {
      		temp = out[i];
      		out[i] = out[j];
      		out[j] = temp;
      		i++;
      		j--;
   	}	
	cout << "ZZ";
	cout << out;
	cout << "0";

}

	
