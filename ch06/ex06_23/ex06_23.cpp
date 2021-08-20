/*
 ***************************************************
 *
 * ex06_23.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.23 (Triangle of any Character)
 * 
 * Created: Aug 19,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

void printTriangle( int, char );

int main()
{
   std::cout << "Enter the height of the triangle:  ";
   int triangleHeight;
   std::cin >> triangleHeight;

   std::cout << "Enter the filling character:  ";
   char fillingChar;
   std::cin >> fillingChar;

   printTriangle( triangleHeight, fillingChar );
}

void printTriangle( int height, char ch ){
   for ( int row{1}; row <= height; ++row) {
      for ( int column{1}; column <= row; ++column ) {
         std::cout << ch;
      }
      std::cout << std::endl;
   }
}