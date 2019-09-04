
#include<iostream>
using namespace std;
class obj_will_destroy
{
public:
	//constructor
	obj_will_destroy(){cout<<"Constructor of class"<<endl;}
	~obj_will_destroy(){cout<<"Destructor of class"<<endl;}
};


int main()
{
	try
	{
		obj_will_destroy test_obj;
		throw(10);//throwing an int ( exception )
	}
	catch (int val)
	{
		cout<<"All obj that are created inside enclosing try block"<<endl;
		cout<<"are destructed before the control is transfered to catch block"<<endl;
	}
	return 0;

}
