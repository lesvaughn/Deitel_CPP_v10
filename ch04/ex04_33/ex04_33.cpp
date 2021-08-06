/*
 ***************************************************
 *
 * ex04_33.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 4.33 (Sides of a Triangle)
 * 
 * Created: Aug 6, 2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

int main()
{
   bool triangleFlag{false};
   std::cout << "Enter three nonzero double values:  ";
   double side1, side2, side3;
   std::cin >> side1 >> side2 >> side3;

   if ( side1 + side2 > side3 ) {
      if ( side1 + side3 > side2 ) {
         if ( side2 + side3 > side1 ) {
            std::cout << "These values could represent the sides of a triangle" << std::endl;
            triangleFlag = true;
         }
      }
   }

   if ( triangleFlag == false ) {
      std::cout << "These values could not represent the sides of a triangle";
   }
}
