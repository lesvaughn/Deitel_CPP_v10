/*
 ***************************************************
 *
 * ex06_32.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.32 (Quality Points for Numeric Grades)
 * 
 * Created: Aug 22,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

int qualityPoints( int );

int main() {
   std::cout << "Enter the sudent's average (-1 to quit):  ";
   int average;
   std::cin >> average;

   while ( average != -1 ) {
      std::cout << "Quality points are " << qualityPoints( average ) << std::endl;
      std::cout << "Enter the sudent's average (-1 to quit):  ";
      std::cin >> average;
   }
}

int qualityPoints( int gradeScore ) {
   int points{0};

   if ( gradeScore >= 90 ) {
      points = 4;
   }
   else if ( gradeScore >= 80) {
      points = 3;
   }
   else if ( gradeScore >= 70 ) {
      points = 2;
   }
   else if ( gradeScore >= 60 ) {
      points = 1;
   }
  
   return points;
}