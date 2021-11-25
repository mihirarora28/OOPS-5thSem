#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b; 
	cout<<"Enter two numbers:";
	cin>>a>>b;
    int ch; 
	cout<<"Enter 1. for addition\n 2.for substraction \n 3. for multiplication\n 4.for division\n";
	cout<<"Enter your choice:\n";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<"Addition of the two numbers is:"<<a+b<<"\n";
			break;
		case 2:
			cout<<"Substraction of the two numbers is:"<<a-b<<"\n";
			break;
		case 3:
			cout<<"Multiplication of the two numbers is:"<<a*b<<"\n";
			break;
		case 4:
			cout<<"Division of the two numbers is:"<<a/b<<"\n";
			break;
		default:
			cout<<"Wrong choice";
			break;
	}
	return 0;
}