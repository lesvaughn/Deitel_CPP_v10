/*
 ***************************************************
 *
 * ex04_35b.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 4.35b (Factorial - Calculate the mathemeatical constant e)
 * 
 * Created: Aug 5,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include <iomanip>

int main()
{
   std::cout << "Enter the number of terms for the summation of e:  ";
   int terms;
   std::cin >> terms;

   long double e{1.0};
   long double numerator{1.0};
   
   while ( terms > 1 ) {
      int cntr{terms - 1};
      long long int denominator{1};
      while ( cntr > 1 ) {
         denominator *= cntr;
         --cntr;
      }
      e += numerator / denominator;
      --terms;
   }

   std::cout << std::setprecision(10) << std::fixed;
   std::cout << "The mathematical constant 'e' calculated to " << terms 
             << " terms is " << e << std::endl;


}