/*
 ***************************************************
 *
 * ex05_14.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 5.14 (Modified Compound-Interest Program)
 * 
 * Created: Aug 7,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
   std::cout << std::fixed << std::setprecision( 2 );

   double principal{ 1000.00 };

   for ( unsigned int i{ 5 }; i <= 10; ++i ) {
      double rate{ static_cast<double>(i) / 100 };
      std::cout << "\nInitial principal:  " << principal << std::endl;
      std::cout << "    Interest rate:  " << rate << std::endl;

      // display headers
      std::cout << "\nYear" << std::setw( 20 ) << "Amount on deposit" << std::endl;

      for ( unsigned int year{ 1 }; year <= 10; ++year ) {
         double amount = principal * pow( 1.0 + rate, year );
         std::cout << std::setw( 4 ) << year << std::setw( 20 ) << amount << std::endl;
      }
   }
}
