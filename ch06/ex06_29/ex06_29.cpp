/*
 ***************************************************
 *
 * ex06_29.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.29 (Prime Numbers)
 * 
 * Created: Aug 21,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include <iomanip>
#include <cmath>

bool isPrime( long long int );

int main()
{
   int columCntr{1};

   for ( int i{2}; i <= 10000; ++i ) {
      if ( isPrime( i ) ) {
         std::cout << std::setw(6) << i;

         if ( columCntr % 10 == 0 ) {
            std::cout << std::endl;
         }

         columCntr += 1;
      }
   }
}

bool isPrime( long long int x ) {
   if ( x == 2 ) {
      return true;
   }

   for ( int i{2}; i <= sqrt( x ); ++i ) {
      if ( x % i == 0 ) {
         return false;
      }
   }

   return true;
}