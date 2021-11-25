#include <iostream>
using namespace std;
class College {
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
class Multipleinheritance: public Student, private College{
    public: 
    Multipleinheritance()
    {
        cout<<"This is a multiple inheritance\n"; 
    }
};
int main()
{  

    Multipleinheritance mihir =  Multipleinheritance();
    mihir.studentRoll = 1900; 
    cout<<mihir.studentRoll; 
    return 0;
}