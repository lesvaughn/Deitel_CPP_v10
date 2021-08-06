/*
 ***************************************************
 *
 * ex04_31.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 4.31 (Calculating a Sphere's Circumference, Area and Volume)
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
   std::cout << "Enter the radius of a sphere:  ";
   double radius;
   std::cin >> radius;

   const double PI = 3.14159;

   std::cout << std::setprecision(4) << std::fixed;

   std::cout << "\nCircumference:\t" << 2 * PI * radius;
   std::cout << "\nArea:\t\t" << 4 * PI * radius * radius;
   
   std::cout << "\nVolume:\t\t" << (4 / 3) * PI * radius * radius * radius << std::endl;
}
