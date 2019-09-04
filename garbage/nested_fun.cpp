#include<iostream>

using namespace std;

class larg_num
{
    int a,b;
public:

    void input(void);
    void display(void);
    void largest(void);
};

void larg_num::input()
{
    cout<<"Enter Two Number ";
    cin>>a>>b;
}

void larg_num::display()
{
    cout<<"Largest Number is ";
    largest();
}

void larg_num::largest()
{
    if(a<b)
    {
        cout<<b;
    }
    else
        cout<<a;
}

int main()
{
    larg_num x;
    x.input();
    x.display();
}
