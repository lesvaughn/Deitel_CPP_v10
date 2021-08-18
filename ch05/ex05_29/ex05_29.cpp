/*
 ***************************************************
 *
 * ex05_26.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 5.23 (Peter Minuit Problem)
 * 
 * Created: Aug 17,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
   double principal{ 29.00 };
   std::cout << std::fixed << std::setprecision(2);

   for ( double rate{ 0.05 }; rate <= 0.10; rate += .01 ) {
      std::cout << "\n\nInitial principal:  " << principal << std::endl; 
      std::cout << "    Interest rate:  " << rate << std::endl;
      double amount = principal * pow( 1.0 + rate, 390 ); 
      std::cout << "After 390 years, amount on deposit is $" << amount << std::endl;
   }
}