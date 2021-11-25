#include <iostream>
using namespace std;
class Person {
  public:
    int id; 
    Person()
    {
      cout << "This is a Person\n";
    }
};
class Student: public Person{
    public:
    int studentRoll ;
    Student(){
        cout<<"This is a student\n"; 
    }
};
class SeniorSecondary: public Student{
    public: 
    SeniorSecondary()
    {
        cout<<"This is a high school Student\n"; 
    }
};
int main()
{  

    SeniorSecondary mihir =  SeniorSecondary();
    return 0;
}