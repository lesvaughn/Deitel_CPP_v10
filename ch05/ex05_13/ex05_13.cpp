/*
 ***************************************************
 *
 * ex05_13.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 5.13 (Factorials)
 * 
 * Created: Aug 7,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include <iomanip>

int main()
{
   long long int factorial{ 1 };

   std::cout << "Number" << std::setw(25) << "Factorial" << std::endl;

   for ( unsigned long long int i{ 1 }; i <= 20; ++ i ) {
      factorial *= i;
      std::cout << std::setw(6) << i << std::setw(25) << factorial << std::endl;
   }
}