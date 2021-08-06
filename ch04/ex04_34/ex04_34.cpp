/*
 ***************************************************
 *
 * ex04_34.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 4.34 (Sides of a Right Triangle)
 * 
 * Created: Aug 6, 2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

int main()
{
   std::cout << "Enter three nonzero integers:  ";
   int side1, side2, side3;
   std::cin>> side1 >> side2 >> side3;

   bool rightTriangleFlag{false};

   if ( side1 * side1 == side2 * side2 + side3 * side3 ) {
      rightTriangleFlag = true;
   }
   else if ( side2 * side2 == side1 * side1 + side3 * side3 ) {
      rightTriangleFlag = true;
   }
   else if (side3 * side3 == side1 * side1 + side2 * side2 ) {
      rightTriangleFlag = true;
   }

   if ( rightTriangleFlag == true ) {
      std::cout << "These values represent the sides of a right triangle." << std::endl;
   }
   else {
      std::cout << "These values do not represent the sides of a right triangle." << std::endl;
   }
}
