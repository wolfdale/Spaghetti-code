#include<iostream>
using namespace std;

class base
{

protected:
	int i;
	int j;
public:
	void setij(int x, int y);
	void showij();
};

class derived: public base
{
	int k;
public:
	void setk();
	void show();
};

void base::setij(int x, int y)
{
	i = x;
	j = y;
}

void base::showij()
{
	cout<<i<<j<<endl;
}

void derived::setk()
{
	setij();
	k = i+j;

}

void derived::show()
{
	cout<<showij()<<endl;
	cout<<k<<endl;

}

int main( int argc ,char * argv[])
{

	derived obj;
	obj.setij(3,4);
	obj.showij();

}


