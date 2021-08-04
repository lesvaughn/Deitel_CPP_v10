// ex02_24.cpp
// Deitel - C++ How to Program
// Aug 2, 2021
// lvaughn

#include <iostream>

int main()
{
   std::cout << "Enter two integers:  ";
   int int1{ 0 };
   int int2{ 0 };
   std::cin >> int1 >> int2;

   if (int1 % 2) {
      std::cout << int1 << " is odd." << std::endl;
   }

   if (int1 % 2) {
      std::cout << int2 << " is odd." << std::endl;
   }

   if ((int1 + int2) % 2) {
      std::cout << "The sum of the integers is " << int1 + int2 << " which is odd." << std::endl;
   }
}
