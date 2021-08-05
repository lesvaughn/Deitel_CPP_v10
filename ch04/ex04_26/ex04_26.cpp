/*
 ***************************************************
 *
 * ex04_26.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 4.26 (Square of Asterisks)
 * 
 * Created: Aug 5,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

int main()
{
   std::cout << "Enter the size of the side of a square:  ";
   int size;
   std::cin >> size;

   int row{1};
  

   while ( row <= size ) {
       int column{1};
      if ( row == 1 || row == size ) {
         while ( column <= size ) {
            std::cout << "*";
            ++column;
         } // end while column
      } // end if row =
      else {
         std::cout << "*";
         column = 1;
         while ( column < size - 1 ) {
            std::cout << " ";
            ++column;
         } // end else
         std::cout << "*"; 
      } // end while row
      std::cout << std::endl;
      ++row;
   } // end while row
}