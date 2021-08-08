/*
 ***************************************************
 *
 * ex05_22.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 5.22 (De Morgan's Law)
 * 
 * Created: Aug 8,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/#include <iostream>

int main()
{
   int x{ 6 };
   int y{ 3 };
   int a{ 4 };
   int b{ 6 };

   // part a:
   // original expression
   std::cout << "Part a:" << std::endl;
   std::cout << !(( x <= 6 ) && ( y % 2 == 1)) << std::endl;
   
   // Rewritten using De Morgan's law
   std::cout << ( !( x <= 6 ) || !( y % 2 == 1 )) << std::endl;

   // part b:
   // original expression
   std::cout << "\nPart b:" << std::endl;
   std::cout <<!(( a < 4 ) || ( b >= 6 )) << std::endl;

   // Rewritten using De Morgan's Law
   std::cout << ( !( a < 4 ) && !( b >= 6 )) << std::endl;

   // part c:
   // original expression
   std::cout << "\nPart c:" << std::endl;
   std::cout << (!( x < 3 ) && !( y > 2 )) << std::endl;

   // Rewritten using De Morgan's Law
   std::cout << !(( x < 3 ) || ( y > 2 )) << std::endl;

   // part d;
   // original expression
   std::cout << "\nPart d:" << std::endl;
   std::cout << (!( a == b ) || !( b != 2)) << std::endl;
   
   // Rewritten usin De Morgan's Law
   std::cout << !(( a == b) && ( b != 2)) << std::endl;
} 
