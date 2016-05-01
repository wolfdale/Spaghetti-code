#include<iostream>
using namespace std;
class copy_con
{
private:
	int n,m;
public:
	copy_con();
	copy_con(int a,int b);
	copy_con(copy_con & i);
	void display(void);
};

copy_con::copy_con()
{
	m = 0;
	n = 0;
}

copy_con::copy_con(int a, int b)
{
	m = a;
	n = b;
}

copy_con::copy_con( copy_con & i)
{
	m = i.m;
	n = i.n;
}

void copy_con::display()
{
	cout<<"Value : "<<m<<endl;
	cout<<"Value : "<<n<<endl;
}
int main(int argc , char * argv[])
{
	copy_con t1;
	t1.display();
	copy_con t2(5,6);
	t2.display();
	copy_con t3(t2);
	t3.display();

	return 0;


}













