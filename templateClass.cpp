#include<iostream>
using namespace std;
class BaseClass
{
public:
	virtual void fun() = 0;
};

// This class inherits from Base and implements fun()
class SecondClass: public BaseClass
{
	int y;
public:
	void fun() { cout << "fun() called"; }
};

int main()
{
	SecondClass d;
	d.fun();
}
