/*
 ***************************************************
 *
 * ex04_28.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 4.28 (Printing the Decimal Equivalent of a Binary Number)
 * 
 * Created: Aug 5,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

int main()
{
  std::cout << "Enter a binary number:  ";
  long long int binary;
  std::cin >> binary;

  unsigned int exponent{1};
  unsigned int decimal{0};

  while ( binary > 0 ) {
     if ( binary % 2 == 1 ) {
        decimal += exponent;
     }
      exponent *= 2;
      binary /= 10;
  } 

  std::cout << "The decimal equivalent is " << decimal << std::endl;
}