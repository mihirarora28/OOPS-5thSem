#include <iostream>  
using namespace std;  
class Employee  
 {  
   public:  
        Employee()    
        {    
            cout<<"Constructor is Invoked"<<endl;    
        }    
        ~Employee()     // destructor
        {    
            cout<<"Destructor is Invoked"<<endl;    
        }  
};  
int main()   
{  
    Employee e1; //creating an object of Employee   
    Employee e2; //creating an object of Employee  
    return 0;  
}  