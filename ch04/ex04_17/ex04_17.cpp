// ex04_17.cpp
// Deitel - C++ How to Program
// Exercise 4.17
// Aug 5, 2021
// lvaughn

#include <iostream>

int main()
{
   unsigned int counter{0};
   int number{0};
   int largest{0};

   while (counter < 10) {
      std::cout << "Enter the number of units sold:  ";
      std::cin >> number;

      if (number > largest) {
         largest = number;
      }

      ++counter;
   }

   std::cout << "The greatest number of units sold is " << largest << std::endl;
}