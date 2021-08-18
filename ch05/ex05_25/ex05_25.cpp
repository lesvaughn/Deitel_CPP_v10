/*
 ***************************************************
 *
 * ex05_25.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 5.25 (Removing break and continue))
 * 
 * Created: Aug 15,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

int main()
{
   unsigned int count;

   for ( count = 1; count != 5 && count <= 10; ++count ) {
      std::cout << count << " ";
   }

   std::cout << "\nUsed structured equivalent to replace break statement and break out of loop "
             << "at count = " << count << std::endl;
}