#include<iostream>

using namespace std;

int main(){
	int i,j,k;

	for(i=1;i<=4;i++){
		for(j=1;j<=5-i;j++)
		{
			cout << j;
		}

		k=i;
		while(k-1){
			cout << "**";
			k--;
		}
		for(j=5-i;j>=1;j--)
		{
			cout << j;
		}


		cout << endl;
	}
return 0;
}

