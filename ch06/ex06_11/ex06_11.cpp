/*
 ***************************************************
 *
 * ex06_11.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.11 
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
   std::cout << "a)\tx = fabs( -2.0 )";
   std::cout << "\n\tx = " << fabs( -2.0 );

   std::cout << "\n\nb)\tx = fabs( 2.0 )";
   std::cout << "\n\tx = " << fabs( 2.0);

   std::cout << "\n\nc)\tx = log( 7.389056 )";
   std::cout << "\n\tx = " << log( 7.389056 );

   std::cout << "\n\nd)\tx = sqrt( 16.0 )";
   std::cout << "\n\tx = " << sqrt( 16.0 );

   std::cout << "\n\ne)\tx = log10( 1000.0 )";
   std::cout << "\n\tx = " << log10( 1000.0 );

   std::cout << "\n\nf)\tx = sqrt( 36.0 )";
   std::cout << "\n\tx = " << sqrt( 36.0 );

   std::cout << "\n\ng)\tx = pow( 2, 3 )";
   std::cout << "\n\tx = " << pow(2, 3) << std::endl;
}