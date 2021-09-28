#include<iostream>
using namespace std; 
class Multiplication{
    public:
    int firstNumber; 
    int SecondNumber; 
    Multiplication(int firstMumber,int SecondNumber)
    {
        this->firstNumber = firstMumber; 
        this->SecondNumber = SecondNumber;
    }
};
int main(){
   
    Multiplication numbers[3] = {Multiplication(23,21),  Multiplication(24,19), Multiplication(53,42)}; // ArrayofObjects
    for(int i = 0 ; i  < 3; i ++ ){
        cout<<numbers[i].firstNumber*numbers[i].SecondNumber<<"\n";
    }  
    
}