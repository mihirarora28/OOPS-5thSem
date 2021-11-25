#include <iostream>
using namespace std;
class Student {
  public:
    Student()
    {
      cout << "This is a Student\n";
    }
};
class ComputerEngineering:public Student{
    public:
    int studentRoll ;
    ComputerEngineering(){
        cout<<"This is a student of computer Engg\n"; 
    }
};
class Mechanical: public Student{
    public: 
    Mechanical()
    {
        cout<<"This is a sudent of MEchanical\n"; 
    }
};
int main()
{  

    Mechanical mihir =  Mechanical();
     ComputerEngineering mihir1 =  ComputerEngineering();
    return 0;
}