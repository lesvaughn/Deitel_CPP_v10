// ex02_29.cpp
// Deitel - C++ How to Program v10
// Aug 2, 2021
// lvaughn

#include <iostream>

int main()
{
   std::cout << "Side of\t\t\tPerimeter of\t\tArea of\n";
   std::cout << "square (cm)\t\tsquare (cm)\t\tsquare (cm^2)\n";

   std::cout << 1 << "\t\t\t" << 1 * 4 << "\t\t\t" << 1 * 1 << "\n";
   std::cout << 2 << "\t\t\t" << 2 * 4 << "\t\t\t" << 2 * 2 << "\n";
   std::cout << 3 << "\t\t\t" << 3 * 4 << "\t\t\t" << 3 * 3 << "\n";
   std::cout << 4 << "\t\t\t" << 4 * 4 << "\t\t\t" << 4 * 4 << "\n";
   std::cout << 5 << "\t\t\t" << 5 * 4 << "\t\t\t" << 5 * 5 << "\n";

   std::cout << std::endl;
}