#include<iostream>
using namespace std; 
class changeVarible{
        public:
    int a; 
    
    changeVarible(int a){
        this->a  = a; 
    }
};
changeVarible change(changeVarible s1){
    int c; 
    cin>>c; 
    s1.a = c; 
    return  s1;
}
int main(){
    changeVarible n1(10); 
    changeVarible s2 = change(n1); 
    cout<<s2.a;
}
