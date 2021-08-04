// ex04_15.cpp
// Deitel - C++ How to Program
// Exercise 4.15
// Aug 3, 2021
// lvuahgn

#include <iostream>
#include <iomanip>

int main(void)
{
   std::cout << "Enter number of hours worked (-1 to end): ";
   double hoursWorked{0.0};
   std::cin >> hoursWorked;

   while (hoursWorked != -1) {
      std::cout << std::setprecision(2) << std::fixed;
      std::cout << "Accrued leave:  " << 2.0 + hoursWorked * .1 << " hours"
                << std::endl;

      std::cout << "\nEnter number of hours worked (-1 to end): ";
      std::cin >> hoursWorked;
   }
}