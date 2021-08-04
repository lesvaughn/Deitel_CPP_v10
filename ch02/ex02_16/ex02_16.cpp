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

   int sum{int1 + int2};
   int product{int1 * int2};
   int difference{int1 - int2};
   int quotient{int1 / int2};

   std::cout << "Sum is " << sum;
   std::cout << "\nProduct is " << product;
   std::cout << "\nDifference is " << difference;
   std::cout << "\nQuotient is " << quotient << std::endl;
}
