#include <iostream>

using namespace std;

class item
{
    int number;
    float cost;
public:
    void getdata(int a,float b);  //Prototype decleration
    void putdata(void)
    {
        cout<<"Number:"<<number<<"\n";
        cout<<"Cost :"<<cost<<"\n";
    }
};

//*************Member Function Definition******************//

void item::getdata(int a, float b)
{
    number = a; // Private variables directly used
    cost = b;
}



int main()
{
    item x; //Object Declaration

    cout<<"OBJECT X" << "\n";
    x.getdata(5,5.8);
    x.putdata();

    return 0;
}
