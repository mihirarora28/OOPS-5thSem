#include <bits/stdc++.h>
using namespace std;
class School
{
public:
    void name()
    {
        cout << "Hi I am a school student " << "\n";
    }
};

class College
{
public:
    void name()
    {
        cout << "Hi I am a college Student" << "\n";
    }
};

class Person : public School, public College
{
public:
    void greet()
    {
        School ::name();
        College ::name();
    }
};
int main()
{
    Person d;
    d.greet();
}