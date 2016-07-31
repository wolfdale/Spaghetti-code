#include<iostream>

class A{
private:
	int a;
public:
	A(const int & x) : a(x) {}
	
	const int& value() const{
	return a;
	}
};

int operator + (const A &obj1 , const A &obj2)
{
	return (obj1.value() + obj2.value());
}	



int main()
{
	A i(9);
	A j(10);
	std::cout << "Add Object : " << i+j << std::endl;

	return 0;
}












