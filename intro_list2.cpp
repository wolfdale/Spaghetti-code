#include<iostream>
#include<list>

using namespace std;

int main()
{

    list<int> li;
    list<int> mylist;

    li.push_front(6);
    li.push_back(1);
    li.push_back(7);

    list<int>::iterator itr;
    itr=li.begin();
    itr++;//points to 2nd element or at 2nd place
    li.insert(itr,77);//insert at 2nd place
    cout<<"LISt after insertion";
    for(itr=li.begin();itr!=li.end();itr++)
    {
        cout<<"\n"<<*itr;
    }

    itr=li.begin();
    li.erase(itr);
    cout<<"\nList after removal";
    for(itr=li.begin();itr!=li.end();itr++)
    {
        cout<<"\n"<<*itr;
    }

    for(int i=0;i<5;i++)
    {
        li.push_back(i);
    }
    cout<<"After some more insertion\n";
    for(itr=li.begin();itr!=li.end();itr++)
    {
        cout<<"\n"<<*itr;
    }


    /**********Properties of list***********/
    /******Fast removal and insertion at any place o(1)****/////
    /***********searching takes o(n) time(Slower than Vector as vector is contiguous*/
    /*****No random access list[] not available*/



}
