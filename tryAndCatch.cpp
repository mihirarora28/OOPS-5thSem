#include <iostream>
using namespace std;
int main()
{
   int number = 2;
   cout<<"Hello World\n"; 
   try {
      cout << "Inside my try\n";
      if (number%2== 0)
      {
         throw number; 
      }
   }
   catch (int number ) {
      cout << "Exception is Caught \n";
   }
 
   cout << "After catch\n";
   return 0;
}