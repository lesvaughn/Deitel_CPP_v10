/*
 ***************************************************
 *
 * ex06_31.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.31 (Greatest Common Divisor)
 * Created: Aug 22,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

int gcd( int, int );

int main() {
   std::cout << "Enter two integers:  ";
   int int1, int2;
   std::cin >> int1 >> int2;

   std::cout << "The greatest common divisor between " << int1 << " and " << int2 << " is "
             << gcd (int1, int2 ) << std::endl;

} // end main

int gcd( int x, int y ) {  
   int gcd;

   for ( int divisor{1}; divisor <= x && divisor <= y; ++divisor ) {
      if ( x % divisor == 0 && y % divisor == 0 ) {
         gcd = divisor;
      }
   }

   return gcd;
} // end gcd