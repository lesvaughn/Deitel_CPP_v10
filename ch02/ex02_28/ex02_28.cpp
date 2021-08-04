// ex02_28.cpp
// Deitel - C++ How to Program
// Aug 2, 2021
// lvaughn

#include <iostream>

int main()
{
   std::cout << "Enter a four-digit integer:  ";
   int nbr;
   std::cin >> nbr;

   std::cout << nbr / 1000 << "  ";
   nbr %= 1000;
   std::cout << nbr / 100 << "  ";
   nbr %= 100;
   std::cout << nbr / 10 << "  ";
   std::cout << nbr % 10 << std::endl;
}
