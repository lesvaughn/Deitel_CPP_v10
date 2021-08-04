// ex02_16.cpp

// Deitel - C++ How to Program v10
// Aug 1, 2021
// lvaughn

#include <iostream>

int main()
{
   std::cout << "Input two integers:  ";
   int int1{ 0 };
   int int2{ 0 };
   std::cin >> int1 >> int2;

   int sum{ 0 };
   sum = int1 + int2;

   int product{ 0 };
   product = int1 * int2;

   int difference{ 0 };
   difference = int1 - int2;

   int quotient{ 0 };
   quotient = int1 / int2;

   std::cout << "Sum is " << sum;
   std::cout << "\nProduct is " << product;
   std::cout << "\nDifference is " << difference;
   std::cout << "\nQuotient is " << quotient << std::endl;
}
