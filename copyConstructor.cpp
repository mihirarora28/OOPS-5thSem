#include<iostream>
using namespace std;
class Initialize
{
private:
	int x, y;
public:
	Initialize(int x1, int y1) { x = x1; y = y1; }
	int getX()		 { return x; }
	int getY()		 { return y; }
};

int main()
{
	Initialize p1(10, 15); 
	Initialize p2 = p1; // Copy constructor is called here
	cout << " " << p1.getX() << " " << p1.getY()<<"\n";
	cout << " " << p2.getX() << "  " << p2.getY();
}
