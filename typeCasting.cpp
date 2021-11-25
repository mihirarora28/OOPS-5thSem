#include<iostream>
using namespace std;

class firstclass{
public :
    int first=0;
  virtual void display(){
    cout<< "1st class"<<first<<"\n";
    }
};
class Derived : public firstclass{
public :
    int second=5;
    void display(){
    cout<<"2"<<second<<"\n";
    cout<<"2 derived"<<second<<"\n";
    }

};

int main(){
firstclass *basePtr;
firstclass baseObj;
Derived derivedObj;
Derived *derivedPtr;
derivedPtr=&derivedObj;
derivedPtr->display();
}