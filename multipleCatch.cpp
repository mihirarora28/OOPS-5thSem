#include<iostream>
using namespace std;
int main()
{
int a = 100, b = 0; 
char cc ; 
try
{
	if(b==0)
		throw(cc); // avoid division by 0
	else
	cc=a/b; 		
		
}
catch(char c)     
{
	cout<<"Caught exception : char type ";
}
catch(int i)     
{
	cout<<"Caught exception : int type ";
}
catch(short s)    
{
	cout<<"Caught exception : short type ";
}
catch (...)  {   
     cout << "Default Exception\n";
}
cout<<"\n Hello";
}