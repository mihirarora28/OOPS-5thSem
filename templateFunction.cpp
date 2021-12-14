#include<iostream>
using namespace std; 
template <typename T>
T solve(T x, T y)
{
	if(x>y){
		return x; 
	}
	else{
		return y; 
	}
}
int main(){
	cout<<solve<int>(3,4)<<"\n"; 
	cout<<solve<double>(3.23,4.231)<<"\n"; 
	cout<<solve<char>('a','g')<<"\n"; 
	return 0; 
}