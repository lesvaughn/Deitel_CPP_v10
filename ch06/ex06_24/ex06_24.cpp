/*
 ***************************************************
 *
 * ex06_24.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.24 (Separating Digits)
 * 
 * Created: Aug 19,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

int main()
{
   std::cout << "Enter an integer between 1 and 32767:  ";
   int integer;
   std::cin >> integer;

   bool digitFound{ false };

   int digit = integer / 10000;
   if ( digit > 0 ) {
      std::cout << digit << "  ";
      digitFound = true;
   }

   int remainder = integer % 10000;
   digit = remainder / 1000;
   if ( !digitFound ) {
      if ( digit > 0 ) {
         digitFound = true;
         std::cout << digit << "  ";
      }
   }
   else {
      std::cout << digit << "  ";
   }

   remainder %= 1000;
   digit = remainder / 100;
   if ( !digitFound ) {
      if ( digit > 0 ) {
         digitFound = true;
         std::cout << digit << "  ";
      }
   }
    else {
      std::cout << digit << "  ";
   }

   remainder %= 100;
   digit = remainder / 10;
   if ( !digitFound ) {
      if ( digit > 0 ) {
         digitFound = true;
         std::cout << digit << "  ";
      }
   }
    else {
      std::cout << digit << "  ";
   }

   digit = remainder % 10;
   if ( !digitFound ) {
      if ( digit > 0 ) {
         digitFound = true;
         std::cout << digit << "  ";
      }
   }
    else {
      std::cout << digit << "  ";
   }
}
