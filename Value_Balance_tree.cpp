#include <iostream>
#define MAX 100
using namespace std;

/**
 * Check given tree is value balanced or not
 * @param tree  : int array : Array representation of a complete binary tree
 * @param count : int   	: Number of elements in tree
 * @return boolean : Given tree is value balanced or not
 */
bool isValueBalanced(int tree[], int count);

int main() {
	int count;
	int tree[MAX];
	cin >> count;
	for (int i = 0; i < count; ++i) {
    	cin >> tree[i];
	}
	if(isValueBalanced(tree, count)) {
    	cout<<"Tree is value balanced";
	} else {
    	cout<<"Tree is not value balanced";
	}
	return 0;
}

bool isValueBalanced(int tree[],int count){
int loop,a,b;

loop=((count-1)/2) - 1;
cout<<loop;

 while(loop != -1){
    a=(2*loop) + 2;
    b=2*loop+1;
    cout<<a;
    cout<<b;

   if(tree[a] != tree[b])
     { return false;}
   else{
      tree[loop]=tree[loop] + tree[a]+tree[a];
      loop--;
       }

 }
 return true;

 }
