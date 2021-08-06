/*
 ***************************************************
 *
 * ex04_35a.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 4.35a (Factorial)
 * 
 * Created: Aug 6,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

int main()
{
   std::cout << "Enter a non-negative integer:  ";
   int integer;
   std::cin >> integer;
   int number = integer;

   long long int factorial{1};

   if ( number != 0 && number != 1 ) {
      while ( integer > 1) {
         factorial *= integer;
         --integer;
      }
   }

   std::cout << number << "! = " << factorial << std::endl;
   
}