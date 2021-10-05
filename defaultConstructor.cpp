#include <iostream>
using namespace std;
class Initialize
{
public:
    int first, second;
    Initialize()
    {
        first = 10;
        second = 20;
    }
};
 
int main()
{
    Initialize c;
    cout << c.first<<" "<< c.second;
}