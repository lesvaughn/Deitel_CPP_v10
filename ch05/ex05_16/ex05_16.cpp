/*
 ***************************************************
 *
 * ex05_16.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 5.16 (Bar-Chart Printing Program)
 * 
 * Created: Aug 7,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

int main()
{
   std::cout << "Enter five integers between 1 and 9:  ";
   int int1, int2, int3, int4, int5;
   std::cin >> int1 >> int2 >> int3 >> int4 >> int5;

   for ( int i{ 1 }; i <= int1; ++i ) {
      std::cout << int1;
   }
   std::cout << std::endl;

   for ( int i{ 1 }; i <= int2; ++i ) {
      std::cout << int2;
   }
   std::cout << std::endl;

   for ( int i{ 1 }; i <= int3; ++i ) {
      std::cout << int3;
   }
   std::cout << std::endl;

   for ( int i{ 1 }; i <= int4; ++i ) {
      std::cout << int4;
   }
   std::cout << std::endl;
   for ( int i{ 1 }; i <= int5; ++i ) {
      std::cout << int5;
   }
   std::cout << std::endl;
}
