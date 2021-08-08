/*
 ***************************************************
 *
 * ex05_20.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 5.20 (Pythagorean Triples)
 * 
 * Created: Aug 8,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include <iomanip>

int main()
{
   unsigned int size = 500;
   std::cout << "Side1\tSide2\tHypotenuse" << std::endl;

   for ( unsigned int i{ 1 }; i <= size; ++i ) {
      for ( unsigned int j{ 1 }; j <= size; ++j ) {
         for ( unsigned int k{ 1 }; k <= size; ++k ) {
            if ( i * i == j * j + k * k ) {
               std::cout << std::setw(5) << j << std::setw(8) << k << std::setw(13) << i << std::endl;
            }
         }
      }
   }
}