#include <iostream>
using namespace std;
class firstClass{
    int x;  
    public : 
     firstClass() { x = 5; }  
    friend class secondClass;  
};

class secondClass{
     int y;   
    public : 
     secondClass() { y = 10; }
     void getX(firstClass& s1){
         cout<< "Private member of firstClass is"<< s1.x<<endl;
         cout<< "My ownMember "<< y;
     };
    
  
};

int main()
{
    firstClass s1; 
    secondClass s2;
    s2.getX(s1);
}