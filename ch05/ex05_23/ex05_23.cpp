/*
 ***************************************************
 *
 * ex05_23.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 5.23 (Egg-timer program)
 * 
 * Created: Aug 9,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

int main()
{
   for ( unsigned int column{ 1 }; column <= 9; ++column ) {
      std::cout << "#";
   }
   std::cout << "\n";
   
   for ( unsigned int row{ 0 }; row <= 3; ++row ) {
      std::cout << "#";
      for ( unsigned int column{ 2 }; column < row + 2; ++column ) {
         std::cout << " ";
      }
      for ( unsigned int column{ row + 2 }; column <= 7; ++column ) {
         std::cout << "*";
      }

      std::cout << "\n";
   }
}