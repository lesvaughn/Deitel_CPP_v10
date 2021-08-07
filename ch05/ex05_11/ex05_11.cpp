/*
 ***************************************************
 *
 * ex05_11.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 5.11 (Find the Smallest Value)
 * 
 * Created: Aug 7,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

int main()
{
   std::cout << "Enter the number of integers to compare:  ";
   int nbr;
   std::cin >> nbr;

   int smallest;

   for ( int i{ 0 }; i < nbr; ++i ) {
      std::cout << "Enter an integer:  ";
      int number;
      std::cin >> number;

      if ( i == 0 ) {
         smallest = number;
      }
      else {
         if ( number < smallest ) {
            smallest = number;
         }
      }
   }

   std::cout << "The smallest integer entered was " << smallest << std::endl;
}