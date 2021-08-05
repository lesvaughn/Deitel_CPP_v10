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
using std::cout;
using std::endl;

int main(void)
{
   

   // Assuming x = 5 and y = 9.
   // Expected output is:
   //    XxXxX
   //    -!-!- 
   cout << "Assuming x = 5 and y = 9" << endl;
   int x{5};
   int y{9};
  
   if ( y % 2 ) {
      if ( x % 2 )
         cout << "XxXxX" << endl;
   }
   else {
      cout << "OxOxO" << endl;
      cout << "YyYyY" << endl;
   }
   
   cout << "-!-!-\n" << endl;

   // assuming x = 5 and y = 8
   // expected output is:
   //    OxOxO
   //    YyYyY
   //    -!-!-
   cout << "Assuming x = 5 and y = 8" << endl;
   x = 5;
   y = 8;

    if ( y % 2 ) {
      if ( x % 2 )
         cout << "XxXxX" << endl;
   }
   else {
      cout << "OxOxO" << endl;
      cout << "YyYyY" << endl;
   }
   
   cout << "-!-!-\n" << endl;

   // for different output assumptions x = 5 and y = 9
   // expected output is "XxXxX"
   cout << "Change algorithm fo new output" << endl;
   cout << "Assuming x = 5 and y = 9" << endl;

   x = 5;
   y = 9;
  
   if ( y % 2 ) {
      if ( x % 2 ) {
         cout << "XxXxX" << endl;
      }
      else {
         cout << "OxOxO" << endl;
         cout << "YyYyY" << endl;   
         cout << "-!-!-\n" << endl;
      }
   }

   // Assuming x = 5 and y = 8
   // expected output is -!-!-
   cout << "\nAssuming x = 5 and y = 8" << endl;
   x = 5;
   y = 8;

   if ( y % 2 ) {
      if ( x % 2 ) {
         cout << "XxXxX" << endl;
      }
      else {
         cout << "OxOxO" << endl;
         cout << "YyYyY" << endl;   
      }
   }
   else {
      cout << "-!-!-\n" << endl;
   }  

}