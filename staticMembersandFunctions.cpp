#include <iostream>
using namespace std;
class OOPS
{
    public:	
		static int x;
        OOPS(){
            x++;
        }
		static void fun()
		{
			cout <<"Value of x: " << x << endl;
            
		}
};

 int OOPS :: x =10;
int main()
{
    cout<<OOPS::x<<"\n"; 
	OOPS obj;
     cout<<OOPS::x<<"\n"; 
	OOPS::fun();
	
	return 0;
}