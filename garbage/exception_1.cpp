//Catching unknown exception
#include <iostream>

using namespace std;

int main()
{
   int a=40;
   int b=0;
   float z;
   try{
        z=a/b;
        cout<<z<<endl;
   }
   catch( const exception& e)
   {
   cerr<<e.what();//Standard output stream for errors
   //cout<<e.what();
   }
}
