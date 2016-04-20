#include  <cstdio>
#include  <iostream>
#include  <string>

using namespace std;

template <typename T>
inline T const& max_ ( T const& a ,T const& b)
{
	return a<b?b:a;
}

int main()
{
	int a = 9;
	int b = 10;
	cout << "Max of a and b " << max_(a,b)<< endl;
	double ia = 6.8;
	double ib = 8.9;
	cout << "Max of a and b " << max_(ia,ib)<<endl;
}
