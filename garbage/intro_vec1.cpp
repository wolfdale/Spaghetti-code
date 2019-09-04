#include<iostream>
#include<vector>
//Vector is a dynamically allocated contiguous array in memory
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

    //Using Iterator MOst Efficient (faster)(universal way of Trav. the container)
    vector<int>::iterator itr;
    for( itr=vec.begin(); itr!=vec.end();itr++)
    {
        cout<<"\n"<<*itr;
    }

    //Direct access to elements of Vector
    cout<<"\n"<<vec[2]; // No range check
   
    try{
    cout<<"\n"<<vec.at(10); //Throw range_error exception of out of range
    }
    catch(exception &e)
    {
        cout<<"\n"<<e.what();
    }
    

}
