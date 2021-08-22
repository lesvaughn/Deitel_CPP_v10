/*
 ***************************************************
 *
 * ex06_36.cpp
 * 
 * Deitel - C++ How to Program
 * Exercise 6.36 (Recursive Exponentiation)
 * 
 * Created: Aug 22,2021
 * Author:  Les Vaughn
 * 
 ***************************************************
*/
#include <iostream>

long long int power( int, int);

int main() {
   std::cout << "Enter base number and exponent to raise it too:  ";
   int number, powerToRaise;
   std::cin >> number >> powerToRaise;

   std::cout << power(number, powerToRaise) << std::endl;
}

long long int power(int base, int exponent) {
   if (exponent == 1) {
      return base;
   }
   else {
      return base * power(base, exponent - 1);
   }
}
