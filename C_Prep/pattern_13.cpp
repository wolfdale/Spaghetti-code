#include<iostream>

using namespace std;

int main(){
	int i,j;
	int k=1;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout << i ;
			if(i!=j){
				cout << "*";
			}
		}
		cout << endl;
	}

	for(i=4;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			cout << i;
			if(j!=1)
			{
				cout << "*";
			}	
		}
		cout << endl;
	}


	return 0;
}

