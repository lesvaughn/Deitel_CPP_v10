// ex02_20.cpp
// Deitel - C++ How to Program v10
// Aug 1, 2021
// lvaughn

#include <iostream>

int main()
{
   std::cout << "Enter the radius of a circle as an integer:  ";
   int radius{ 0 };
   std::cin >> radius;

   float PI = 3.14159;

   std::cout << "Diameter is " << radius * 2;
   std::cout << "\nCircumference is " << 2 * PI * radius;
   std::cout << "\nArea is " << PI * radius * radius << std::endl;
}