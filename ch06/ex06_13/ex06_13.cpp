/*
 ***************************************************
 *
 * ex06_13.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.13 (Rounding Numbers)
 * 
 * Created: Aug 18,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include <cmath>

int main()
{
   std::cout << "Enter a number containing a decimal (-1 to quit): ";
   double number;
   std::cin >> number;

   while ( number != -1 ) {
      std::cout << number << " rounds to " << floor( number + 0.5 );
      std::cout << "\n\nEnter a number containing a decimal (-1 to quit): ";
      std::cin >> number;
   }
}
