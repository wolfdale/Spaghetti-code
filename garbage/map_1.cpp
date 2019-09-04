#include <string.h>
#include <iostream>
#include <map>
#include <utility>

using namespace std;

int main()
{
    map<int, string> Employees;

   // 1) Assignment using array index notation
    Employees[1] = "Mike C.";
    Employees[2] = "Charlie M.";
    Employees[3] = "David D.";
    Employees[4] = "John A.";
    Employees[5] = "Peter Q.";

    cout << "Employees[3]=" << Employees[3] << endl << endl;
    cout << "Map size: " << Employees.size() << endl;
    for( map<int,string>::iterator ii=Employees.begin(); ii!=Employees.end(); ++ii)
    {
        cout << (*ii).first << ": " << (*ii).second << endl;
    }

}
