//try-catch blocks can be nested. An exception can be re-thrown using throw;

#include<iostream>
using namespace std;
int main()
{
	try
	{
		try{
			throw 4.7;
		}
		catch( double val)
		{
			cout<<"caught 1st time"<<endl;
			throw;
		}	
	}
	catch (double val)
	{
		cout<<"Caught 2nd time"<<endl;
	}
	return 0;

}
	
