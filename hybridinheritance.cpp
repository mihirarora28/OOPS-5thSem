#include <iostream>
using namespace std;
class Person{
    public: 
    Person(){
        cout<<"This is a person\n"; 
    }
};
class College : public Person {
  public:
    College()
    {
      cout << "This is a College\n";
    }
};
class Student{
    public:
    int studentRoll ;
    Student(){
        cout<<"This is a student\n"; 
    }
};
class HybridInheritance: public Student, private College{
    public: 
    HybridInheritance()
    {
        cout<<"This is a Hybrid inheritance\n"; 
    }
};
int main()
{  

    HybridInheritance mihir =  HybridInheritance();
    mihir.studentRoll = 1900; 
    cout<<mihir.studentRoll; 
    return 0;
}