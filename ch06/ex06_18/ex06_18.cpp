/*
 ***************************************************
 *
 * ex06_18.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.18 (Exponentiation)
 * 
 * Created: Aug 19,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

long long int integerPower( unsigned int, unsigned int );

int main()
{
   std::cout << "Enter the base number as a positive nonzero integer:  ";
   int baseNbr;
   std::cin >> baseNbr;

   std::cout << "Enter the exponent to which to raise the base as a positive nonzero integer:  ";
   int power;
   std::cin >> power;

   if ( baseNbr < 1 || power < 1 ) {
      std::cout << "Error - the base number and the exponent must be nonzero positive integers"
                << std::endl;
   }
   else {
      std::cout << baseNbr << " raised to the " << power << " power is " 
                << integerPower(baseNbr, power) << std::endl;
   }

}

long long int integerPower( unsigned int base, unsigned int exponent )
{
   unsigned int result{ 1 };

   for ( unsigned int i{ 1 }; i <= exponent; ++i ) {
      result *= base;
   }

   return result;
}