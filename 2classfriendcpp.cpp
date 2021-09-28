#include <iostream>
using namespace std;
class MyClass{
    int x;  
    public : 
     MyClass() { x = 5; }
    friend void frFunction(MyClass& a ){
         cout<< "inside friend function, value of x is =" <<a.x;
    };  
};
class NewClass{
     int y;
    public : 
     NewClass() { y = 10; }
    
    friend void frFunction(NewClass& a ){
         cout<< "inside friend function, value of y is =" <<a.y;
    };
};
int main()
{
    MyClass object1;
    NewClass object2;
    frFunction(object1);
    cout<<'\n';
    frFunction(object2);
    return 0;
}