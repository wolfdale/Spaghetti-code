//Compiler Implicity calls desctroctor to destroy object if its out of scope

#include<iostream>

using namespace std;

int count = 0;

class Destruct
{

public:
	Destruct()
	{
		count++;
		cout<<"No of OBJ created "<<count<<endl;
	}
	~Destruct()
	{
		cout<<"No of OBJ Destroyed "<<count<<endl;
		count--;
	}


};

int main( int argc , char * argv[])
{
	Destruct a1,a2,a3,a4;
	{
		cout<<"Inside block 1 "<<endl;;
		Destruct a5;
	}
	{
		cout<<"Inside block 2"<<endl;
		Destruct a6;
	}
}








