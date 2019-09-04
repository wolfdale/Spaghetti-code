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

    /*************COMMON Member Functions for All Containers*****************/
    if( ! vec.empty()) //.empty() Function
    {
        cout<<"\n\n\n"<<"Vector Not Empty\n\n";
    }

    cout<<"Size of Vector right Now is "<<vec.size()<<"\n\n"; //.size() function

    vector<int> vec2(vec); //Copy constructor now vec2 : 10 20 30
    cout<<"Vector 2\n";
    for(itr=vec2.begin();itr<vec2.end();itr++)
    {
        cout<<*itr<<"\n";
    }


    vec.clear(); // removes all the items fron vec
    if(vec.size()==0)
    {
        cout<<"\n"<<"Vector 1 has Zero elements\n\n";
    }

    vec2.swap(vec);  //vec2 becomes empty and vec has now 3 items
    cout<<"\n"<<"Now Size of vector 2 is "<<vec2.size();
    cout<<"\n"<<"Now Size of Vector 1 is "<<vec.size();
    
    /****PROPERTIES OF VECTOR****/
    /***FASTER INSERTION AND DELETION AT THE END OF VECTOR IS FAST****/
    /***SLOW INSERTION AND DELETION AT THE MIDDLE OR BEGNINING OF VECTOR (MOVING/SHIIFTION OF OTHER ELEMENTS IS REQUIRED)***/
    /***SLOW SEARCHING****/
    /***VECTOR ONLY GROWS AT THE END****/ 
    
    
            
}
