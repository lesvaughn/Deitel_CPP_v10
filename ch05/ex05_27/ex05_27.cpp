/*
 ***************************************************
 *
 * ex05_27.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 5.27 (Replacing continue with a Structured Equivalent)
 * 
 * Created: Aug 15,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

int main()
{
   for ( unsigned int count{1}; count <= 10; ++count ) {
      if ( count != 5 ) {
         std::cout << count << " ";
      }
   }

   std::cout << "\nUsed a structured equivalent to replace continue and skip printing 5" 
             << std::endl;
}