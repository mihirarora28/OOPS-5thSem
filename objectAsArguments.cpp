#include<iostream>
using namespace std; 
class firstNumber{
        public:
    int a; 
    
    firstNumber(int a){
        this->a  = a; 
    }
};
class SecondNumber{
       public:
    int b; 
 
    SecondNumber(int b){
        this->b  = b; 
    }
};
int multiPlyNumbers(firstNumber f1, SecondNumber s1){
    return (f1.a)*(s1.b);
}
int main(){
    firstNumber n1(4);
    SecondNumber n2(8); 
    cout<<multiPlyNumbers(n1,n2); 
}
