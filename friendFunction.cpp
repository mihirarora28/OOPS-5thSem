#include <iostream>
using namespace std;

class Student{
    int x; 
    public : 
     Student() { x = 5; }
    friend void friendFunction(Student&);
    
};

void friendFunction(Student& student){
       cout<< "Now I can access Private members of class " <<student.x;
};
int main()
{
    Student s1;
    friendFunction(s1);

    return 0;
}