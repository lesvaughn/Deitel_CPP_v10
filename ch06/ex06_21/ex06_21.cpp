/*
 ***************************************************
 *
 * ex06_21.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.21 (Multiple of 5)
 * 
 * Created: Aug 19,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

bool isMultiple5( int );

int main()
{
   std::cout << "Enter an integer (-1 to quit):  ";
   int integer;
   std::cin >> integer;

   while ( integer != -1 ) {
      if ( isMultiple5( integer )) {
         std::cout << integer << " is not a multiple of 5." << std::endl;
      }
      else {
         std::cout << integer << " is a multiple of 5." << std::endl;
      }

   std::cout << "Enter an integer (-1 to quit):  ";
   std::cin >> integer;

   } // end while

}  // end main

bool isMultiple5( int x ) {
   if ( x % 5 ) {
      return true;
   }
   else {
      return false;
   }
}  // end isMultiple5()