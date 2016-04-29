#include<iostream>
using namespace std;
template<typename T>
class test_class
{
    T val1,val2;
    
public:
    test_class(T x, T y)
    {
        val1 = x;
        val2 = y;
    }
    
    T getmax()
    {
        T ret_val;
        ret_val = val1>val2 ? val1 : val2;
        return ret_val;
    }

};

int main()
{
    test_class<int> myobj(13,3);
    cout << myobj.getmax(); 
}
