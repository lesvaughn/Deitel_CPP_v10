/*
 ***************************************************
 *
 * ex06_28.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.28 (Dudeney Numbers)
 * 
 * Created: Aug 20,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include <cmath>

bool isDudeney( int );

int main()
{ 
	for ( int i{1}; i <= 100; ++i ) {
      int cube = pow( i, 3 );

      if ( isDudeney( cube ) ) {
         std::cout << cube << std::endl;
      }
   }
}

bool isDudeney( int x ) {

   int root = cbrt( x );
   int sumOfDigits{ 0 };
   int remainder = x;

   while ( remainder > 0 ) {
      sumOfDigits += remainder % 10;
      remainder /= 10;
   }

   if ( sumOfDigits == root ) {
      return true;
   }
   else {
      return false;
   }
}
