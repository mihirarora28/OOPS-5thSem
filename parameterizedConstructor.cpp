#include <iostream>
using namespace std; 
class Initialize
{
private:
	int x, y;
public:

	Initialize(int x1, int y1)
	{
		x = x1;
		y = y1;
	}
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
};

int main()
{
	Initialize c(20, 15);
	cout << c.getX() << " " << c.getY();
}
