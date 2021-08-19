/*
 ***************************************************
 *
 * ex06_19.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.19 (Hypotenuse Calculations)
 * 
 * Created: Aug 19,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>
#include <iomanip>
#include <cmath>

double hypotenuse( double, double );

int main()
{
   std::cout << "Triangle" << std::setw(8) << "Side1 " << std::setw(8) << "Side 2" 
             << std::setw(13) << "Hypotenuse" << std::endl;
   std::cout << "1" << std::setw(14) << "3.0" << std::setw(9) << "4.0" << std::setw(13)
             << std::setprecision(1) << std::fixed << hypotenuse( 3.0, 4.0 ) << std::endl;
   std::cout << "2" << std::setw(14) << "5.0" << std::setw(9) << "12.0" << std::setw(13)
             << std::setprecision(1) << std::fixed << hypotenuse( 5.0, 12.0 ) << std::endl;
   std::cout << "3" << std::setw(14) << "8.0" << std::setw(9) << "15.0" << std::setw(13)
             << std::setprecision(1) << std::fixed << hypotenuse( 8.0, 15.0 ) << std::endl;
}

double hypotenuse( double sideA, double sideB ) {
   return sqrt( sideA * sideA + sideB * sideB );
}