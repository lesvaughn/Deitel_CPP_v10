/*
 ***************************************************
 *
 * ex05_21.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 5.21 (Modified Triangle-Printing Program)
 * 
 * Created: Aug 8,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

int main()
{
   for ( unsigned int row{ 1 }; row <= 10; ++row ) {
      // print asterisks for first pattern
      for ( unsigned int column{ 1 }; column <= row; ++column ) {
         std::cout << "*";
      }

      // print tailing spaces for first pattern
      for ( unsigned int column{ row + 1}; column <= 15; ++column ) {
         std::cout << " ";
      }

      // print asterisks for second pattern
      for (unsigned int column{ 1 }; column <= 11 - row; ++column ) {
         std::cout << "*";
      }

      // print trailing spaces for second pattern
      for ( unsigned int column{ 10 - row }; column <= 15; ++column ) {
         std::cout << " ";
      }

      // print leading spaces for third pattern
      for ( unsigned int column{ 1 }; column <= row - 1; ++column ) {
         std::cout << " ";
      }

      // print asterisks for third pattern
      for ( unsigned int column{ row }; column <= 10; ++column ) {
         std::cout << "*"; 
      }

      // print leading spaces for fourth pattern
      for ( unsigned int column{ 1 }; column <= 15 - row; ++column ) {
         std::cout << " ";
      }

      // print asterisks for fourth pattern;
      for ( unsigned int column{ 11 - row }; column <= 10; ++column ) {
         std::cout << "*";
      }

      std::cout << std::endl;
   }
}