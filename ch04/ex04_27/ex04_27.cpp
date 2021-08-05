/*
 ***************************************************
 *
 * ex04_27.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 4.27 (Another Dangling-else problem)
 * 
 * Created: Aug 5,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

int main()
{
   std::cout << "Enter a five-digit integer:  ";
   int number;
   std::cin >> number;

   int digit1{ number / 10000 };
   int remainder{ number % 10000 };
   int digit2{ remainder / 1000 };
   remainder = number % 1000;
   remainder %= 100;
   int digit4{ remainder / 10 };
   int digit5{ remainder % 10 };

   if ( digit1 == digit5 ) {
      if ( digit2 == digit4 ) {
         std::cout << number << " is a palindrome" << std::endl;
      }
   }
   else {
      std::cout << number << " is not a palindrome" << std::endl;
   }
}