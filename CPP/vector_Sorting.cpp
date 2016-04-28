#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
bool sorter(int i,int j)
{
        return (i>j); 
}

int main(int argc, char * argv[])
{
    vector<int> vec;
    int n;
    cout<<"enter the number of element"<<endl;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    
    sort(vec.begin(),vec.end(),sorter);
    
    for(auto i: vec)
    {
        cout<<i<<endl;
    }
    
    
    return 0;
    
}
