#include<unordered_map>
#include<string>
#include<iostream>

using namespace std;

int main(int argc , char * argv[])
{
    unordered_map <string,string> string_map;
	unordered_map <string,int> map;
	map["hello"] = 34;
	map["world"] = 24;
	cout<< map["hello"]<<endl;
	cout<<"Hash Size "<<map.size()<<endl;
	
	//<map_name>.at("map") function
	cout<<"The sum of both Map item using map.at function"<<map.at("hello")+map.at("world")<<endl;
	
	string_map = {{"india" , "Delhi"},{"uk","london"},{"us","Was-DC"}};
	
	//Print the whole map bucket using iterator( here i have used auto )
	cout<<"Map bucket contains"<<endl;
	
	for(auto x = string_map.begin(); x != string_map.end();++x)
	{
	    cout <<x->first<<":"<<x->second<<endl;
	}
	
	return 0;
}
