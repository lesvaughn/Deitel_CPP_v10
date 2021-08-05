// ex04_19.cpp
// Deitel - C++ How to Program v10
// Exercise 4.19
// Aug 4, 2021
// lvaughn

#include <iostream>

int main() 
{
   std::cout << "This program will ask its user to enter 10 integers.  Enter each value";
   std::cout << "\nonly once." << std::endl;

   unsigned int counter{0};
   int integer{0};
   int largest{0};
   int secondLargest{0};

   while (counter < 10) {
      std::cout << "Enter an integer:  ";
      std::cin >> integer;

      if (counter == 0) {
         largest = integer;
      }
      else if (counter == 1) {
         if (integer < largest) {
            secondLargest = integer;
         }
         else {
            secondLargest = largest;
            largest = integer;
         }
      }
      else {
         if (integer > largest) {
            secondLargest = largest;
            largest = integer;
         }
      }

      ++counter;
   }

   std::cout << "\nThe two largest integers entered were " << largest << " and " << secondLargest
             << std::endl;
}