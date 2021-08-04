// ex02_19.cpp
// Deitel - C++ How to Program v10
// Aug 1, 2021
// lvaughn

#include <iostream>

int main()
{
   std::cout << "Input three different integers:  ";
   int int1{ 0 };
   int int2{ 0 };
   int int3{ 0 };
   std::cin >> int1 >> int2 >> int3;

   int sum{int1 + int2 + int3};
   int average{sum / 3};
   int product{int1 * int2 * int3};

   // calculate smallest
   int smallest{ int1 };
   if (int2 < smallest) {
      smallest = int2;
   }
   if (int3 < smallest) {
      smallest = int3;
   }

   //calculate largest
   int largest{ int1 };
   if (int2 > largest) {
      largest = int2;
   }
   if (int3 > largest) {
      largest = int3;
   }

   std::cout << "Sum is " << sum;
   std::cout << "\nAverage is " << average;
   std::cout << "\nProduct is " << product;
   std::cout << "\nSmallest is " << smallest;
   std::cout << "\nLargest is " << largest << std::endl;


}