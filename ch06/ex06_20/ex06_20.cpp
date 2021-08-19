/*
 ***************************************************
 *
 * ex06_20.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.20 (Factors)
 * 
 * Created: Aug 19,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

bool isFactor( int, int );

int main()
{
   std::cout << "Enter a pair of integers (-1 to quit):  ";
   int int1;
   int int2;
   std::cin>> int1 >> int2;
   
   if (isFactor( int1, int2 )) {
      std::cout << int2 << " is a factor of " << int1 << std::endl;
   }
   else {
      std::cout << int2 << " is not a factor of " << int1 << std::endl;
   }
}

bool isFactor ( int x, int y )
{
   if ( x % y ) {
      return false;
   }
   else {
      return true;
   }
}