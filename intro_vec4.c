//More STL Functions
#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> v)
{
    vector<int>::iterator itr;
    for(itr=v.begin();itr<v.end();itr++)
    {
        cout<<*itr<<"\n";
    }
}
int main()
{

    vector<int> vec;
    int x;
    for(int i=0; i<5 ; i++)
    {
        cin>>x;
        vec.push_back(x);
    }
    cout<<"The Vector is :"<<"\n";
    display(vec);

    /*****Another Way of Inserting in Vector**********/

    vector<int>::iterator itr;
    itr=vec.end(); //itr pointing to end
    vec.insert(itr,1,99); //pointer size element
    cout<<"After insertion"<<"\n";
    display(vec);

    /*******Erase Function*****////
    cout<<"After Erase function"<<"\n";
    vec.erase(vec.begin()+2,vec.begin()+5); //removes 3,4,5 element
    display(vec);
    return 0;
}


