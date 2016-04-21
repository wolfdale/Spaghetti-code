#include<iostream>
using namespace std;
int main()
{
	cout<<"Default catch statment"<<endl;
	try
	{
		throw 4.7;
	}
	catch( int val)
	{
		cout<<"caught"<<endl;
	}
	catch (...)
	{
		cout<<"Defaut catch"<<endl;
	}
	return 0;

}
	
