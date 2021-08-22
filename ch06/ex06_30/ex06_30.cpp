/*
 ***************************************************
 *
 * ex06_30.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.30 (Reverse Digits)
 * 
 * Created: Aug 21,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

int reverseDigits( int );

int main()
{
   std::cout << "Enter an integer between 1 and 32767:  ";
   int integer;
   std::cin >> integer;

   std::cout << reverseDigits( integer ) << std::endl;
}

int reverseDigits( int n ) {
  int reverseNumber = 0;
   while ( n > 0 ) {
      reverseNumber = reverseNumber * 10 + n % 10;
      n /= 10;
   }
   return reverseNumber;
}
