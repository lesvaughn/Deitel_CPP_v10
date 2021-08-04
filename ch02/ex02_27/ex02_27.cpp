// ex02_27.cpp
// Deitel - C++ How to Program v10
// Aug 2, 2021
// lvaughn

#include <iostream>

int main()
{
   std::cout << "Enter a character:  ";
   char ch;
   std::cin >> ch;

   std::cout << "The integer equivalent of \'" << ch << "\' is " << static_cast<int>(ch) << std::endl;
}