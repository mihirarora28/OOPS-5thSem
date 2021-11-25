#include <iostream>
using namespace std;
class Person {
  public:
    int id; 
    Person()
    {
      cout << "This is a Person\n" << endl;
    }
};
class Student: public Person{
    public:
    Student(){
        cout<<"This is a student\n"; 
    }
};
 
// main function
int main()
{  

    Student mihir =  Student();
    mihir.id = 4; 
    cout<<mihir.id; 
    return 0;
}