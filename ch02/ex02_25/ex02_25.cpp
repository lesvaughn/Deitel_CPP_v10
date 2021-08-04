// ex02_25.cpp
// Deitel - C++ How to Program v10
// Aug 2, 2021
// lvaughn

#include <iostream>

int main()
{
   std::cout << "Enter three integers:  ";
   int int1{ 0 };
   int int2{ 0 };
   int int3{ 0 };
   std::cin >> int1 >> int2 >> int3;

   if (int3 % int1 == 0) {
      std::cout << int1 << " is a factor of " << int3 << std::endl;
   }

   if (int3 % int2 == 0) {
      std::cout << int2 << " is a factor of " << int3 << std::endl;
   }
}