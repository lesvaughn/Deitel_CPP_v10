/*
 ***************************************************
 *
 * ex05_15.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 5.15 (Triangle Printing Program)
 * 
 * Created: Aug 7,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

int main()
{
   // print triangle (a)
   for ( unsigned int row{ 1 }; row <= 10; ++ row ) {
      for ( unsigned int column{ 1 }; column <= row; ++column ) {
         std::cout << "*";
      }
      std::cout << "\n";
   }

   std::cout << "\n\n";

   // print triangle (b)
   for ( unsigned int row{ 1 }; row <= 10; ++row ) {
      for (unsigned int column{ 1 }; column <= 11 - row; ++column ) {
         std::cout << "*";
      }
      std::cout << "\n";
   }

   std::cout << "\n\n";

   // print triangle (c)
   for ( unsigned int row{ 1 }; row <= 10; ++row ) {
      for ( unsigned int column{ 1 }; column < row; ++column ) {
         std::cout << " ";
      }
      for ( unsigned int column{ row }; column <= 10; ++column ) {
         std::cout << "*";
      }
      std::cout << "\n";
   }

   std::cout << "\n\n";

   // print triangle (d)
   for ( unsigned int row { 1 }; row <= 10; ++ row ) {
      for ( unsigned int column{ 1 }; column <= 10 - row; ++column ) {
         std::cout << " ";
      }
      for ( unsigned int column{ 1 }; column <= row; ++column ) {
         std::cout << "*";
      }
      std::cout << "\n";
   }

}