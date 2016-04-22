//No functional overhead in inline fuctions
#include<iostream>
using namespace std;
class square
{
public:
	int sq(int);
};
inline int square::sq(int a)
{
	return a*a;
}
int main()
{
	square o;
	cout<<o.sq(9)<<endl;
}
