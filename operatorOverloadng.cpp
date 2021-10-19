#include<iostream>
using namespace std; 
class Number{
    int x; 
    public:
     Number(int x){
         this->x = x; 
     }
    void operator+(Number n1){
        cout<<x + n1.x<<"\n";    
     }
    void operator-(Number  n1){
     cout<<x - n1.x<<"\n";   
     }
    void operator*(Number  n1){
     cout<<x * n1.x<<"\n";   
     }
    void operator/(Number  n1){
     cout<<x / n1.x<<"\n";   
     }
    void operator%(Number n1){
     cout<<x % n1.x<<"\n";   
     } 
}; 
int main(){
    Number n1(9); 
    Number n2(4); 
    n1+n2;       
    n1-n2;      
    n1*n2;      
    n1/n2;
    n1%n2;      
}