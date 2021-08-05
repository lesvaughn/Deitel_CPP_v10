// ex04_18.cpp
// Deitel - C++ How to Program
// Exercise 4.18
// Aug 5, 2021
// lvaughn

#include <iostream>

int main()
{
   std::cout << "\nx\t\t2*x\t\t4*x\t\t8*x" << std::endl;
   
   unsigned int i{1};
   while (i <= 10) {
      std::cout << i << "\t\t" << 2 * i << "\t\t" << 4 * i << "\t\t" << 8 * i << std::endl;
      ++i;
   }

} 