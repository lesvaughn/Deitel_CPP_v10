/*
 ***************************************************
 *
 * ex06_22.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.22 (Triangle of Asterisks)
 * 
 * Created: Aug 19,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

void printTriangle( int );

int main()
{
   std::cout << "Enter the height of the triangle:  ";
   int triangleHeight;
   std::cin >> triangleHeight;

   printTriangle( triangleHeight );
}

void printTriangle( int height ) {
   for ( int row{1}; row <= height; ++row ) {
      for ( int column{1}; column <= row; ++column ) {
         std::cout << "*";
      }
      std::cout << std::endl;
   }
}