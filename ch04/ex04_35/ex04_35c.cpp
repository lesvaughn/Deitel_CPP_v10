/*
 ***************************************************
 *
 * ex04_35c.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 4.35c (Factorial - Calculate e^x)
 * 
 * Created: Aug 6,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include <iomanip>

int main()
{
   std::cout << "Enter the power to raise e:  ";
   int power;
   std::cin >> power;

   std::cout << "Enter the number of terms to use in the summation of e^x:  ";
   int terms;
   std::cin >> terms;

   unsigned long long int numerator{static_cast<unsigned long long int>(power)};
   long double eToX{ 1.0 };
   int cntr{ 1 };

   while ( cntr <= terms ) {  
      int factor{ 1 };
      unsigned long long int denominator{ 1 };
      while ( factor <= cntr ) {
         denominator *= factor;
         ++factor;
      }

      eToX += static_cast<double>(numerator) / static_cast<double>(denominator);
      numerator *= power;
      ++cntr;
   }

   std::cout << std::setprecision(8) << std::fixed;
   std::cout << "e to the power of " << power << " is " << eToX << std::endl;
}
