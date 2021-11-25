#include<iostream>
#include<conio.h>
using namespace std;
class Person
{
    int age1;
public:
    void age(int x)
    {
        age1=x;
        cout<<"Age is"<<age1<<"\n";
    }
};
class second:virtual public Person
{
    int age2;
public:
    void age2(int y)
    {
        age2=y;
        cout<<"Age is"<<age2<<"\n";
    }

};

class third:virtual public Person
{
    int age3;
public:
    void age3(int z)
    {
        age3=z;
        cout<<"Age is"<<age3<<"\n";
    }
};
class obj: private second, private third
{
public:
    void over();
};

void obj :: over()
{
    age(100);
    age2(120);
    age3(130);
}

int main()
{
    class obj t;
    t.over();
    return 0;
}