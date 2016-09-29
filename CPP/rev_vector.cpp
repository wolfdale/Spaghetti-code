#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	vector<string> v;
	
	v.push_back("Hello World");
	v.push_back("Thsi is cool");
	reverse(v.begin(),v.end());
	for(vector<string>::iterator it= v.begin(); it!=v.end(); it++){
		cout<<*it<<" ";	
	}
	return 0;
}
