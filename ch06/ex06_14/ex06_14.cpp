/*
 ***************************************************
 *
 * ex06_14.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.14 (Rounding Numbers)
 * 
 * Created: Aug 18,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/

#include <iostream>
#include <cmath>

int roundToInteger( double );
double roundToTenths( double );
double roundToHundredths( double );
double roundToThousandths( double );

int main()
{
   std::cout << "Enter a number with at least four decimal places:  ";
   double number;
   std::cin >> number;

   std::cout << "\n" << number << " rounded to the nearest integer is " << roundToInteger( number );
   std::cout << "\n" << number << " rounded to the nearest tenths is " << roundToTenths( number );
   std::cout << "\n" << number << " rounded to the nearest hundredths is " 
             << roundToHundredths( number );
   std::cout << "\n" << number << " rounded to the nearest thousandths is " 
             << roundToThousandths( number ) << std::endl;
}

int roundToInteger( double nbr ) {
   return floor( nbr + .5 );
}

double roundToTenths( double nbr ) {
   return floor( nbr * 10 + 0.5 ) / 10;
}

double roundToHundredths( double nbr ) {
   return floor( nbr * 100 + 0.5 ) / 100;
}

double roundToThousandths( double nbr ) {
   return floor( nbr * 1000 + 0.5 ) / 1000;
}