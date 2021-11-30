#include <iostream>
using namespace std;
 
int main()
{
	char a = 'c';
    try  {
       throw a;
    }
    
    catch (int x)
    {
    	cout<<"caught integer"<<"\n";
	}
    catch (...)  {    // everytime when exception happens
        cout << "Default Exception\n";
    }
    return 0;
}