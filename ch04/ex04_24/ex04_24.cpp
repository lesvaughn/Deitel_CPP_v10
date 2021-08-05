// ex04_24.cpp
// Deitel - C++ How to Program
// Exercise 4.24 (Another Dangling-else Problem)
// Aug 5, 2021
// lvaughn

#include <iostream>
using std::cout;
using std::endl;

int main()
{
   int x{5};
   int y{15};

   if ( y < 10 ) {
      if ( x > 10 )
         cout << "XxXxX" << endl;
      else
         cout << "YxYxY" << endl;
   }
   else {
      cout << "OoOoO" << endl;
   }

   x = 15;
   y = 5;

   if ( y < 10 ) {
      if ( x > 10 ) {
         cout << "XxXxX" << endl;
      }
      else {
         cout << "YxYxY" << endl;
      }
   }
   else {
      cout << "OoOoO" << endl;
   }
  
}