// bmiCalc.cpp
// Deitel - C++ How to Program v10
// Aug 2, 2021
// lvaughn

#include <iostream>

int main()
{
   std::cout << "Enter weight in pounds:  ";
   int weight{ 0 };
   std::cin >> weight;

   std::cout << "Enter height in inches:  ";
   int height{ 0 };
   std::cin >> height;

   int bmi{ 0 };
   bmi = (weight * 703) / (height * height);

   std::cout << "BMI is " << bmi;
   std::cout << "\n\nBMI VALUES";
   std::cout << "\nUnderweight:\tless than 18.5";
   std::cout << "\nNormal:\t\tbetween 18.5 and 24.9";
   std::cout << "\nOverweight:\tbetween 25 and 29.9";
   std::cout << "\nObese:\t\t30 or greater";
   std::cout << std::endl;
}