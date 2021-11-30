#include <iostream>
using namespace std;
 

void fun(int x)
{
    if (x %2== 0)
        throw x;
}
 
int main()
{
    try {
       fun(12);
    }
    catch(int x) {
        cout << "Caught exception from a function\n";
    }
    cout<<"\n"; 
     try {
       fun(7);
    }
    catch(int x) {
        cout << "Caught exception from a function\n";
    }
    return 0;
}