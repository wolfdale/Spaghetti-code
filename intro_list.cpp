//*****List Container*****//
#include<iostream>
#include<list>
#include<cstdlib> //For Rand() function

using namespace std;

void display(list<int> lis)
{
    list<int>::iterator itr;
    for(itr=lis.begin();itr != lis.end(); itr++)
    {
        cout<<*itr<<"\n";
    }
}

int main()
{
    list<int> list1; //Empty list of size 0
    list<int> list2(5); //Empty list of size 5(initial not permanent) (but we can add more dynamically )
    cout<<"Size of list1 : "<<list1.size();
    cout<<"\nSize of list2 : "<<list2.size();
    for(int i=0;i<5;i++)
    {
        list1.push_back(rand()/100);
    }

    list<int>::iterator itr;

    for(itr=list2.begin();itr != list2.end() ; itr++)
    {
        *itr=rand()/100;
    }

    cout<<"\nList 1\n";
    display(list1);
    cout<<"\nList 2\n";
    display(list2);

    list1.push_front(1000); //Add element at front
    list1.push_back(1111); // Add element at back

    cout<<"\nList 1 after Modification \n";
    display(list1);

    list2.pop_front(); //Removing element from front
    list2.pop_back(); //Removing element from back

    cout<<"\nList 2 after Mod. \n";
    display(list2);

    //Merging two unsorted lists
    cout<<"List after Merger\n";
    list1.merge(list2);
    display(list1);

    list<int> lista,listb;
    lista=list1; //list1 is the merged list

    lista.sort(); //Sorting a list you can merge sorted list
    cout<<"\nCopied and sorted list A(List1 has changed due to merge ops before)\n";
    display(lista);

    lista.reverse();
    cout<<"\nReversed list\n";
    display(lista);

    return 0;


}
