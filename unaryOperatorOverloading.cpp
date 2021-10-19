#include <iostream>
using namespace std;
class Number {
    int x;
   public :
    Number(){
        x = 5; 
    }
     void display() {
        cout << x << "\n";
    }
    Number operator ++ () {
        Number temp;
        temp.x = ++x;

        return temp;
    }
    Number operator -- () {
        Number temp;
        temp.x = --x;
        return temp;
    }

   
};

int main() {
    Number count1, result;
    result = ++count1;
    result.display();

    result = --count1;
    result.display();

   

    return 0;
}