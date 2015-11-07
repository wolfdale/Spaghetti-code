#include<iostream>
#include<stack>


using namespace std;

int main()
{

    /*DECLARE INTEGER STACK*/
    stack<int> stk;

    /*TO CHECK A STACK IS EMPTY*/
    if(stk.empty())
    {
        cout<<"Stack is empty intially";
    }

    /*STCK PUSH OPERATION*/
    stk.push(5);
    stk.push(8);
    stk.push(9);
    stk.push(4);
    stk.push(2);
    stk.push(3);
    stk.push(7);

    /*TO GET TOP ELEMENT*/
    cout<<stk.top();

    /*TO POP ELEMENT*/
    stk.pop();
    cout<<stk.top();
    /*DISPLAY THE SIZE OF STACK*/
    cout<<stk.size();




}

