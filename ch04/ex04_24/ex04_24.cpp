// ex04_24.cpp
// Deitel - C++ How to Program
// Exercise 4.24 (Another Dangling-else Problem)
// Aug 5, 2021
// lvaughn

#include <iostream>

int main()
{
   int x{5};
   int y{15};

   if ( y < 10 ) {
      if ( x > 10 )
         std::cout << "XxXxX" << std::endl;
      else
         std::cout << "YxYxY" << std::endl;
   }
   else {
      std::cout << "OoOoO" << std::endl;
   }

   x = 15;
   y = 5;

   if ( y < 10 ) {
      if ( x > 10 ) {
         std::cout << "XxXxX" << std::endl;
      }
      else {
         std::cout << "YxYxY" << std::endl;
      }
   }
   else {
      std::cout << "OoOoO" << std::endl;
   }
  
}