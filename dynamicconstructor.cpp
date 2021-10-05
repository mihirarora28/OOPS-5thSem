#include <iostream>

using namespace std;

string start = "student";

class student{
    public: 
    string * names;
    int * rollNo;
   
    // dynamic constructor
    student() {
        rollNo = new int[10];
        names = new string[10];
    }
    void set() {
        for(int i = 0; i < 10; i++) {
            rollNo[i] = i;
            names[i] = start + char(65 + i);
        }
    }
    
};
int main() {
   student c1;
   c1.set();
   cout << c1.rollNo[0] << " " << c1.names[0] << endl;
   
}