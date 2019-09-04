#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main()
{
    vector<int> vectr;
    vectr.push_back(10);
    vectr.push_back(1);
    vectr.push_back(23);
    vectr.push_back(15);
    vectr.push_back(9);
    vectr.push_back(5);
    vectr.push_back(10);

    vector<int>::iterator itr;
    //Before Sorting Algorithm
    for(itr=vectr.begin();itr<vectr.end();itr++)
    {
        cout<<*itr<<"\n";
    }

    cout<<"After Sorting the vector\n";

    /****SORTING ALGORITHM*****/
    sort(vectr.begin(),vectr.end());

    for(itr=vectr.begin();itr<vectr.end();itr++)
    {
        cout<<*itr<<"\n";
    }

    cout<<"\nReversing the Vector"<<"\n";

    /****REVERSE  ALGORITHM********/
    reverse(vectr.begin(),vectr.end());

    for(itr=vectr.begin();itr<vectr.end();itr++)
    {
        cout<<*itr<<"\n";
    }

    /****RANDOM SHUFFELING*****/
    cout<<"\nRandom shuffle the vector\n";
    random_shuffle(vectr.begin(),vectr.end());

    for(itr=vectr.begin();itr<vectr.end();itr++)
    {
        cout<<*itr<<"\n";
    }

    /*******To count how many elements with a given value are contained in a vector***/
    cout<<"\nTo count Number of elements in vector\n";
    int number=count(vectr.begin(), vectr.end(), 10);
    cout<<"\n"<<number<<"\n";

    /********To determine the highest and lowest values in a vector******/

    int highest = *max_element(vectr.begin(),vectr.end()); //it return iterator hence use * to dereference it
    cout<<"\n\nHighest Element is "<<highest;

    int lowest = *min_element(vectr.begin(),vectr.end());
    cout<<"\n\nLowest Element is "<<lowest;

    return 0;
}
