/*
 ***************************************************
 *
 * ex05_12.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 5.12 (Prodect of Even Integers)
 * 
 * Created: Aug 7,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

int main()
{
   unsigned int product{ 1 };

   for ( unsigned int i { 2 }; i <= 10; i += 2 ) {
      product *= i;
   }

   std::cout << "The product of the even integers from 2 to 10 is " << product << std::endl;
}