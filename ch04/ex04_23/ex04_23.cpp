// ex04.23.cpp
// Deitel - C++ How to Program v10
// Exercise 4.23 (Dangling-else Problem)
// Aug 5, 2021
// lvaughn

#include <iostream>
using std::cout;

int main()
{
   int x = 3;
   int y = 6;

   if ( x > 5 ) {
      if ( y > 5 ) {
         cout << "x and y are > 5";
      }
   }
   else {
      cout << "x is <= 5";
   }
}