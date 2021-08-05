/*
 ***************************************************
 *
 * ex04_25.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 4.25 (Another Dangling-else problem)
 * 
 * Created: Aug 5,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/

#include <iostream>

int main(void)
{
   // Assuming x = 5 and y = 9.
   // Expected output is:
   //    XxXxX
   //    -!-!- 
   std::cout << "Assuming x = 5 and y = 9" << std::endl;
   int x{5};
   int y{9};
  
   if ( y % 2 ) {
      if ( x % 2 )
         std::cout << "XxXxX" << std::endl;
   }
   else {
      std::cout << "OxOxO" << std::endl;
      std::cout << "YyYyY" << std::endl;
   }
   
   std::cout << "-!-!-\n" << std::endl;

   // assuming x = 5 and y = 8
   // expected output is:
   //    OxOxO
   //    YyYyY
   //    -!-!-
   std::cout << "Assuming x = 5 and y = 8" << std::endl;
   x = 5;
   y = 8;

    if ( y % 2 ) {
      if ( x % 2 )
         std::cout << "XxXxX" << std::endl;
   }
   else {
      std::cout << "OxOxO" << std::endl;
      std::cout << "YyYyY" << std::endl;
   }
   
   std::cout << "-!-!-\n" << std::endl;

   // for different output assumptions x = 5 and y = 9
   // expected output is "XxXxX"
   std::cout << "Change algorithm fo new output" << std::endl;
   std::cout << "Assuming x = 5 and y = 9" << std::endl;

   x = 5;
   y = 9;
  
   if ( y % 2 ) {
      if ( x % 2 ) {
         std::cout << "XxXxX" << std::endl;
      }
      else {
         std::cout << "OxOxO" << std::endl;
         std::cout << "YyYyY" << std::endl;   
         std::cout << "-!-!-\n" << std::endl;
      }
   }

   // Assuming x = 5 and y = 8
   // expected output is -!-!-
   std::cout << "\nAssuming x = 5 and y = 8" << std::endl;
   x = 5;
   y = 8;

   if ( y % 2 ) {
      if ( x % 2 ) {
         std::cout << "XxXxX" << std::endl;
      }
      else {
         std::cout << "OxOxO" << std::endl;
         std::cout << "YyYyY" << std::endl;   
      }
   }
   else {
      std::cout << "-!-!-\n" << std::endl;
   }  

}