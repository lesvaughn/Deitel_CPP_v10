/*
 ***************************************************
 *
 * ex04_29.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 4.29 (Checkerboard Pattern of Asterisks)
 * 
 * Created: Aug 5,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

int main()
{
   for ( unsigned int row{1}; row <= 8; ++row ) {
      if ( row % 2 ) {
         for (unsigned int column{1}; column <= 8; ++column ) {
            std::cout << "* ";
         }
      }
      else {
         std::cout << " ";
         for (unsigned int column{1}; column <= 8; ++column ) {
            std::cout << "* ";
         }
      }

       std::cout << std::endl;
   }
}