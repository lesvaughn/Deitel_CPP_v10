// ex02_18.cpp
// Deitel - C++ How to Program v10
// Aug 1, 2021
// lvaughn

#include <iostream>

int main(void)
{
   std::cout << "Enter two integers:  ";
   int int1{ 0 };
   int int2{ 0 };
   std::cin >> int1 >> int2;

   if (int1 != int2) {
      std::cout << "These numbers are not equal" << std::endl;
   }

   if (int1 < int2) {
      std::cout << int1 << " is smaller" << std::endl;
   }

   if (int2 < int1) {
      std::cout << int2 << " is smaller" << std::endl;
   }
}