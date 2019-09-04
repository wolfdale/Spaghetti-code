#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int i;
    vector<int> vec; //vec.size()== 0
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    cout<<vec.size(); //Vector vec Size
    //using simple access like array
    for(i=0;i<vec.size();i++)
    {
        cout<<"\n"<<vec[i]<<" \n";
    }

    //Using Iterator
    vector<int>::iterator itr;
    for( itr=vec.begin(); itr!=vec.end();itr++)
    {
        cout<<"\n"<<*itr;
    }
}
