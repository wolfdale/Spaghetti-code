/* HASH Implementation using c++ Unordered maps */
/* compile using g++ -std=c++0x <file_name> */
#include<unordered_map>
#include<string>
#include<iostream>

using namespace std;

int main(int argc , char * argv[])
{
	unordered_map <string,int> map;
	map["hello"] = 34;
	cout<< map["hello"]<<endl;
	cout<<"Hash Size "<<map.size()<<endl;
	return 0;
}
